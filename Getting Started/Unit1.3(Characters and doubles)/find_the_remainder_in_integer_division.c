/*
You have a number of loose matches that you would like to put back into boxes.
Write a program that calculates and displays how many full boxes you will have
and how many leftover matches you will have after filling all the boxes you can.
Your program should take as input the number of matches to be boxed up followed
by the size of a each box. Next it should print out the number of full boxes
followed by the number of remaining matches.

Example
Input:
666
13
Output:
51
3
Note
You may submit as many solutions as you wish. Only your highest score will be
kept.
*/
#include <stdio.h>

int main() {
  int n, s;

  scanf("%d\n", &n);
  scanf("%d\n", &s);
  printf("%d\n", n / s);
  printf("%d\n", n % s);
  return 0;
}