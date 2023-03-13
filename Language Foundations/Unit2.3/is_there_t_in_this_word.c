/*
You are conducting a linguistic study and are interested in finding words that
contain the letter 't' or 'T' in the first half of the word (including the
middle letter if there is one). Specifically, if the first half of the word does
contain a 't' or a 'T', your program should output a 1. If the first half does
not contain the letter 't' or 'T', but the second half does, then your program
should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your
program's output should be -1. You may assume that the word entered does not
have more than 50 letters.



Examples
Input:
apple
Output:
-1


Input:
raincoat
Output:
2


Input:
enter
Output:
1


Input:
Taylor
Output:
1
Warning: You will be graded on your output, so do not include any print
statements that prompt a user for input.

Note
You may submit as many solutions as you wish. Only your highest score will be
kept.
*/
#include <stdio.h>

int main() {
  char word[10];
  int i = 0, j = 0, means, out = 0, l = 0;

  scanf("%s", word);
  while (word[i] != '\0') {
    i++;
  }
  //   l = i;
  if (i % 2) {
    means = i / 2 + 1;
  } else {
    means = i / 2;
  }
  //   means = i / 2;
  i = 0;
  while (word[j] != '\0' && (out == 0)) {
    if (((word[j] == 't') || (word[j] == 'T')) && (i <= means)) {
      printf("1\n");
      out = 1;
    }
    if (((word[j] == 't') || (word[j] == 'T')) && (i > means)) {
      printf("2\n");
      out = 1;
    }
    j++;
    i++;
  }
  while ((word[l] != '\0') && (word[l] != 't' || word[l] != 'T') && out == 0) {
    printf("-1\n");
    out = 1;
    l++;
  }
  return 0;
}