/*
Write a C-program that prints out a word as many times as specified. The number
of repetitions and the word should be given as input to the program. You may
assume that the word has no more than 100 characters (be sure to also reserve
space for the null terminator, \0, though!).



Examples
Input:
2 Hello
Output:
Hello
Hello


Input:
4 thing
Output:
thing
thing
thing
thing
*/
#include <stdio.h>

int main() {
  int n;
  char data[101];
  scanf("%d", &n);
  scanf("%s", data);
  while (n > 0) {
    printf("%s\n", data);
    n--;
  }

  return 0;
}