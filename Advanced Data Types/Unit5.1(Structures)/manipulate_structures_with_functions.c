/*
In this problem you will continue developing the data feature which you started
implementing in the previous problem. You will implement a "tomorrow" feature in
the C programming language via a function called "advanceDay()". The function
advanceDay() should take as input a date (stored in a struct date) and return
the date of the following day. You do not have to take into account leap years
(although you may if you wish to). That is, it is okay for your function to
always return March 1 as the day following February 28, no matter the year.

You are provided with a familiar date structure definition, a main function as
well as the function prototypes for the readDate(), printDate(), and
advanceDate() functions. Do not modify any of the given code. Simply add your
function definitions underneath the main() function. For the readDate() and
printDate() functions you may simply copy and paste the code you developed in
the previous task.
*/
#include <stdio.h>

struct date {
  int year;
  int month;
  int day;
};

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);

int main(void) {
  struct date today, tomorrow;
  readDate(&today);
  printDate(today);
  tomorrow = advanceDay(today);
  printDate(tomorrow);
  return 0;
}

void printDate(struct date to) {
  printf("%02d/%02d/%04d\n", to.month, to.day, to.year);
}

void readDate(struct date *to) {
  scanf("%d %d %d", &to->year, &to->month, &to->day);
}

struct date advanceDay(struct date now) {
  if (now.month == 12 && now.day == 31) {
    now.year++;
    now.month = 01;
    now.day = 01;
  } else if (now.month == 02 && now.day == 28) {
    now.month++;
    now.day = 01;
  } else if (now.day == 31) {
    now.month++;
    now.day = 01;
  } else if ((now.month == 04 || now.month == 06 || now.month == (10 - 01) ||
              now.month == 11) &&
             now.day == 30) {
    now.month++;
    now.day = 01;
  } else {
    now.day = now.day + 1;
  }
  return (now);
}