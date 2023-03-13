#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
void printStudents(struct student *start);
void freeStudents(struct student *start);
/* add any other prototypes as needed */

int main(void) {
    struct student *start, *newStudptr, *end;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    freeStudents(start);

    return 0;
}

/* Place your function definitions here. Be sure to include the definitions for 
   createStudent(), append(), printStudents() as well as any other functions you 
   created for the previous tasks. */
struct student *createStudent(char studentName[], int studentAge) {
    struct student *cptr = (struct student*)malloc(sizeof(struct student));
    int i = 0;

    while (studentName[i] != '\0') {
        cptr->name[i] = studentName[i];
        i++;
    }
    cptr->age = studentAge;
    cptr->next = NULL;

    return cptr;  
}
struct student *append(struct student * end, struct student * newStudptr) {
    end->next = newStudptr;
    return end->next;
}

void printStudents(struct student *start) {
    while (start != NULL) {
        printf("%s is %d years old.\n", start->name, start->age);
        start = start->next;
    }
}

void freeStudents(struct student *start) {
    struct student *tmp;
    while (start != NULL) {
        tmp = start->next;
        free(start);
        start = tmp;
    }
}