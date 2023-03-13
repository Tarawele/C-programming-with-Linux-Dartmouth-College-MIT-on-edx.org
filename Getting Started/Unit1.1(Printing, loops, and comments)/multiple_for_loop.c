/*
You would like to display the same thing multiple times, but you do not wish to
have to re-type it multiple times in your program.

Please print the following text to the screen:

C is fun!
C is fun!
C is fun!

We can do everything with it!
We can do everything with it!
We can do everything with it!
We can do everything with it!
We can do everything with it!
Simple, right? So now let's make this more difficult! You are only allowed to
use three "printf" statements, and on top of that, you are not allowed to repeat
text inside any of your printf statements.

Warning: Your output needs to look exactly like the above output.

Note
You may submit as many solutions as you wish. Only your highest score will be
kept.

Remember to declare the variable used in the loop outside the loop in this quiz.
So if using variable i, declare that it is an integer before starting the loop.
This is only so that the grader grades you correctly for this quiz. As you move
on with the quizzes in this course you will be able to compress the code by
declaring int within the loop itself.
*/

#include <stdio.h>

int main() {
  int i = 0;
  int j = 0;
  for (i = 0; i < 3; i++) {
    printf("C is fun!\n");
  }
  // printf("\n");
  for (j = 0; j < 5; j++) {
    printf("\nWe can do everything with it!");
  }
  return 0;
}