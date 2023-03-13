/*
Your grandparents gave you a fantastic cooking recipe but you can never remember
how much of each ingredient you have to use! There are 10 ingredients in the
recipe and the quantities needed for each of them are given as input (in grams).
Your program must read 10 integers (the quantities needed for each of the
ingredients, in order) and store them in an array. It should then read an
integer which represents an ingredient's ID number (between 0 and 9), and output
the corresponding quantity.

Example
Input:
500 180 650 25 666 42 421 1 370 211
3
Output:
25
Warning: You will be graded on your output, so do not include any print
statements that prompt a user for input.

Note
You may submit your solution as many times as you wish. Only your highest score
will be kept.
*/
#include <stdio.h>

int main() {
  int i, max = 10;
  int cellNumber = 0;
  int readvalue;
  int array[max];

  for (i = 0; i < max; i++) {
    scanf("%d", &readvalue);
    array[cellNumber] = readvalue;
    cellNumber = cellNumber + 1;
    if (i == 9) {
      scanf("%d", &cellNumber);
      printf("%d", array[cellNumber]);
    }
  }
  return 0;
}