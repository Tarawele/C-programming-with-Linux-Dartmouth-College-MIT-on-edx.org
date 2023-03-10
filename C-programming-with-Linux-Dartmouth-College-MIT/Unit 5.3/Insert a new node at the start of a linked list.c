#include <stdio.h>
#include <stdlib.h>

struct digit {
  int num;
  struct digit *next;
};
struct digit *infront(struct digit *bstart, struct digit *newDigit);
struct digit *reverse(struct digit *revStart);
struct digit *searchDigit(struct digit *, int);
struct digit *readDigit(void);
struct digit *createDigit(int);
void printDigit(struct digit *digit);
void freeDigit(struct digit *digit);
struct digit *append(struct digit *e, struct digit *new);
struct digit *sorted(struct digit *start);
struct digit *infrontSorted(struct digit *start, struct digit *tmp);
int countRedun(struct digit *start);

int main() {
  struct digit *start, *ptr;
  // int search = 5;

  printf("Please entered number: ");
  start = readDigit();
  printf("You entered: ");
  printDigit(start);
  //   ptr = searchDigit(start, search);
  //   printf("Found: ");
  ptr = reverse(start);
  printf("Reverse entered: ");
  printDigit(ptr);
  printf("Sorted copy: ");
  ptr = sorted(start);
  printDigit(ptr);
  printf("contains %d redundancies.\n", countRedun(start));
  freeDigit(start);
  return 0;
}

int countRedun(struct digit *start) {
  struct digit *sort = sorted(start);
  struct digit *tmp = sort;
  int n = 1;
  int pr = -1;

  while (tmp != NULL) {
    if (tmp->num == pr) {
      n++;
    } else {
      pr = tmp->num;
    }
    tmp = tmp->next;
  }
  return n;
}

struct digit *infrontSorted(struct digit *start, struct digit *tmp) {
  struct digit *ptr = start;
  struct digit *prev = NULL;
  while ((ptr != NULL) && (ptr->num < tmp->num)) {
    prev = ptr;
    ptr = ptr->next;
  }
  if (prev == NULL) {
    start = infront(start, tmp);
  } else {
    prev->next = tmp;
    tmp->next = ptr;
  }
  return (start);
}

struct digit *sorted(struct digit *start) {
  struct digit *ptr = start, *sorted = NULL, *newDigit;

  if (start != NULL) {
    sorted = createDigit(start->num);
    ptr = ptr->next;
  }
  while (ptr != NULL) {
    newDigit = createDigit(ptr->num);
    sorted = infrontSorted(sorted, newDigit);
    ptr = ptr->next;
  }
  return (sorted);
}

struct digit *infront(struct digit *bstart, struct digit *newDigit) {
  newDigit->next = bstart;

  return (newDigit);
}

struct digit *reverse(struct digit *start) {
  struct digit *ptr = start, *bstart = NULL, *newDigit;
  if (start != NULL) {
    bstart = createDigit(ptr->num);
    ptr = ptr->next;
  }
  while (ptr != NULL) {
    newDigit = createDigit(ptr->num);
    bstart = infront(bstart, newDigit);
    ptr = ptr->next;
  }
  return (bstart);
}

// struct digit *searchDigit(struct digit *start, int dig) {
//   while (start != NULL && start->num != dig) {
//     start = start->next;
//   }
//   return (start);
// }

struct digit *append(struct digit *e, struct digit *new) {
  e->next = new;
  return (new);
}
struct digit *readDigit(void) {
  struct digit *start = NULL, *end, *newPtr;
  char c;
  int d;
  scanf("%c", &c);
  while (c != '\n') {
    d = c - '0';
    newPtr = createDigit(d);
    if (start == NULL) {
      start = newPtr;
      end = start;
    } else {
      end = append(end, newPtr);
    }
    scanf("%c", &c);
  }
  return (start);
}

struct digit *createDigit(int a) {
  struct digit *ptr = (struct digit *)malloc(sizeof(struct digit));

  ptr->num = a;
  ptr->next = NULL;

  return (ptr);
}

void printDigit(struct digit *digit) {
  while (digit != NULL) {
    printf("%d", digit->num);
    digit = digit->next;
  }
  printf("\n");
}
void freeDigit(struct digit *digit) {
  struct digit *ptr, *tmp;
  ptr = digit;
  while (ptr != NULL) {
    tmp = ptr->next;
    free(ptr);
    ptr = tmp;
  }
}
