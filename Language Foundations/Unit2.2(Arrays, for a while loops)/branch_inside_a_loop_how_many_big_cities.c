/*
You want to determine the number of cities in a given region that have a
population strictly greater than 10,000. To do this, you write a program that
first reads the number of cities in a region as an integer, and then the
populations for each city one by one (also integers).

Example
Input
6
1000
5000
15000
4780
0
23590
Output
2
Warning: You will be graded on your output, so do not include any print
statements that prompt a user for input.

Note
You may submit as many solutions as you wish. Only your highest score will be
kept.
*/
#include <stdio.h>

int main() {
  int i, n, sum = 0;

  scanf("%d", &n);
  int tws[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &tws[i]);
    if (tws[i] >= 10000) {
      sum += 1;
    }
  }
  printf("%d", sum);
  return 0;
}