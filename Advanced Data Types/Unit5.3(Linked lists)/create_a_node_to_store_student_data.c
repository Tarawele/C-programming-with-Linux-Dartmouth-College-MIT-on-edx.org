#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
// Write other function prototypes here (if any)

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

// Write your createStudent function here (and any other functions you see fit)
struct student *createStudent(char studentName[], int studentAge) {
    struct student *sptr = (struct student*)malloc(sizeof(struct student));
    int i = 50;
    while (i > 0 && i--) {
        sptr->name[i] = studentName[i];
    }
    sptr->age = studentAge;
    sptr->next = NULL;
    
    return sptr;
}
