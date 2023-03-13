#include <stdio.h>
#include <stdlib.h>

struct point {
  int x;
  int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {

  // Fill in your main function here
  struct point *polygon;
  int num;
  scanf("%d", &num);
  polygon = (struct point *)malloc(num * sizeof(struct point));
  initializePoly(polygon, num);
  printPoly(polygon, num);
  return 0;
}

void printPoint(struct point pt) { printf("(%d, %d)\n", pt.x, pt.y); }

void printPoly(struct point *ptr, int N) {
  int i;
  for (i = 0; i < N; i++) {
    printPoint(ptr[i]);
  }
}

// Write your initializePoly() function here
void initializePoly(struct point *pol, int vtcs) {
  int i;
  for (i = 0; i < vtcs; i++) {
    pol[i].x = -i;
    pol[i].y = i * i;
  }
}