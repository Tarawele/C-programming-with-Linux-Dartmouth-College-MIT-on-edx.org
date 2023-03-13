/*
Your goal is to read a 68-word text from the input and then output it to the
screen backwards. Individual words do not have to be spelled backwards, but
rather your program should output out the last word first, then the
second-to-last word, etc. No word has more than 40 characters.

Example
Input
Science Computer on Papers Selected Knuth, Ervin Donald ― correct." be will
results the that reader a convince to and works algorithm an way the communicate
to concepts, mathematical as well as forms literary and aesthetic traditional
with works who essayist an ideally is programmer A clearly. them understand can
beings human that so and quickly them perform can machines computing that so
written are programs best "The

Output
"The best programs are written so that computing machines can perform them
quickly and so that human beings can understand them clearly. A programmer is
ideally an essayist who works with traditional aesthetic and literary forms as
well as mathematical concepts, to communicate the way an algorithm works and to
convince a reader that the results will be correct." ― Donald Ervin Knuth,
Selected Papers on Computer Science
*/
#include <stdio.h>

int main(void) {
  //! showMemory(cursors=[words[0], words[1], words[2]], start=65520)
  char words[68][40];
  int i, j;
  for (i = 0; i < 68; i++) {
    scanf("%s", words[i]);
  }
  for (j = 68; j >= 0; j--) {
    if (j == 0) {
      printf("%s", words[j]);
    } else if (j == 68) {
      printf("%s", words[j]);
    } else {
      printf("%s ", words[j]);
    }
  }
  return 0;
}