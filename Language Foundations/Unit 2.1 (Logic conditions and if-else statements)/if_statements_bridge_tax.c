/*
You arrive in front of a bridge that you must cross to reach a village before
dark. Crossing the bridge is not free - the bridgekeeper asks you to roll two
dice to determine the cost. You decide to write a program to verify that he is
charging the right price.

Your program should read two integers, between 1 and 6, representing the values
of each die. If the sum is greater than or equal to 10, then you must pay a
special fee (36 coins). Otherwise, you pay twice the sum of the values of the
two dice. Your program must then display the text "Special tax" or "Regular tax"
followed by the amount you have to pay on the next line.

Example
Input
5
6
Output
Special tax
36


Input
4
3
Output
Regular tax
14
Warning: You will be graded on your output, so do not include any print
statements that prompt a user for input.

Note
You may submit as many solutions as you wish. Only your highest score will be
kept.
*/
#include <stdio.h>

int main() {
  int n, m;

  scanf("%d%d", &n, &m);
  int s = n + m;
  if ((n >= 1 && n <= 6) && (m >= 1 && m <= 6)) {
    if (s >= 10) {
      printf("Special tax\n");
      printf("36\n");
    } else {
      s = 2 * (m + n);
      printf("Regular tax\n");
      printf("%d\n", s);
    }
  }
  return 0;
}