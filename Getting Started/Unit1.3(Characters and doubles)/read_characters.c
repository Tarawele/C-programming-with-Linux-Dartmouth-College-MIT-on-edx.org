/*
Write a C-program that reads an input character (using scanf) and displays the
following pyramid pattern using the character read:

Examples
Input
#
Output
++++#++++
+++###+++
++#####++
+#######+
#########
Input
o
Output
++++o++++
+++ooo+++
++ooooo++
+ooooooo+
ooooooooo
*/
#include <stdio.h>

int main() {
  int i, j;
  char b = '+', ins = 'o';
  int n = 4, k = n - 1;

  scanf("%c", &ins);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < n; j++) {
      printf("%c", b);
    }
    for (k = n - 1; k < 4; k++) {
      printf("%c", ins);
    }
    for (k = n; k < 4; k++) {
      printf("%c", ins);
    }
    for (j = 0; j < n; j++) {
      printf("%c", b);
    }
    n -= 1;
    printf("\n");
  }
  return 0;
}