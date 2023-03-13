/*
You are still conducting linguistic research! This time, you'd like to write a
program to find out how many letters occur multiple times in a given word. Your
program should read a word from the input and then sort the letters of the word
alphabetically (by their ASCII codes). Next, your program should iterate through
the letters of the word and compare each letter with the one following it. If
these equal each other, you increase a counter by 1, making sure to then skip
ahead far enough so that letters that occur more than twice are not counted
again. You may assume that the word you read from the input has no more than 50
letters, and that the word is all lowercase.



Examples
Input:
apple
Output:
1


Input:
keeper
Output:
1


Input:
erroneousnesses
Output:
5


Input:
taylor
Output:
0
Warning: You will be graded on your output, so do not include any print
statements that prompt a user for input.

Note
You may submit as many solutions as you wish. Only your highest score will be
kept.
*/
#include <stdio.h>

int main() {
  char w[51];
  int j, n, l = 0, i, k = 0;
  char tmp;
  char pre = ' ';
  scanf("%s", w);
  while (w[l] != '\0') {
    l++;
  }
  n = l;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n - 1; j++) {
      if (w[j] > w[j + 1]) {
        tmp = w[j];
        w[j] = w[j + 1];
        w[j + 1] = tmp;
      }
    }
  }

  for (j = 0; j < n - 1; j++) {
    if ((w[j] == w[j + 1]) && (w[j] != pre)) {
      k++;
    }
    pre = w[j];
  }
  printf("%d\n", k);
  return 0;
}