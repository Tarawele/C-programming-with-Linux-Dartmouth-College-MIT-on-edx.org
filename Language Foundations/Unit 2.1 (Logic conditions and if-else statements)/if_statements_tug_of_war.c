/*
You decide to bet on the final match of the Tug of War National Championship.

Prior to the match the names and weights of the players are presented,
alternating by team (team 1 player 1, team 2 player 1, team 1 player 2, and so
on). There is the same number of players on each side. You record the player
weights as they are presented and calculate a total weight for each time to
inform your bet. You write a C program to assist with this.

Your program should first read an integer indicating the number of members per
team. Then, the program should read the player weights (integers representing
kilograms) alternating by team.

After calculating the total weight of each team, the program should display the
text "Team X has an advantage" (replacing X with 1 or 2 depending on which team
has a greater total weight).

You will then display the text "Total weight for team 1:" followed by the weight
of team 1, then "Total weight for team 2:" followed by the weight of team 2 (see
example below).

You are guaranteed that the two teams will not have the same total weight.

Example
Each team is composed of four players. Those of the first weigh 110, 113, 112,
and 117kg, while those of the second weigh 106, 102, 121, and 111kg. Team 1
weighs a total of 452kg whereas team 2 weighs a total of 440kg, giving team 1 an
advantage.

Input
4
110
106
113
102
112
121
117
111
Output
Team 1 has an advantage
Total weight for team 1: 452
Total weight for team 2: 440
Warning: You will be graded on your output, so do not include any print
statements that prompt a user for input.
*/
#include <stdio.h>

int main() {
  int n, i, even;
  int tm1, tm2, sum1 = 0, sum2 = 0;
  scanf("%d", &n);
  n = n * 2;
  for (i = 0; i < n; i++) {
    even = i % 2;
    if (even == 0) {
      scanf("%d", &tm1);
      sum1 += tm1;
    } else {
      scanf("%d", &tm2);
      sum2 += tm2;
    }
  }
  char *s1 = "Team 1 has an advantage";
  if (sum1 > sum2) {
    printf("%s\n", s1);
  } else {
    char *s2 = "Team 2 has an advantage";
    printf("%s\n", s2);
  }
  printf("Total weight for team 1: %d\n, Total weight for team 2: %d", sum1,
         sum2);
  return 0;
}