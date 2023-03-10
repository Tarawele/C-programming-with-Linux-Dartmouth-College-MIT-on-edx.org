/*
Here is your final activity of this unit. Use it to apply everything you have
learned! David is fighting Goliath (again...) and it turns out that Goliath is
much bigger than David thought. Fortunately David is not short of resources and
he plans to send robots to fight the giant. But before launching the assault,
David must evaluate the performance of these robots to ensure success. This is
where you come in. You are given some data on David's robots and need to compute
and output a corresponding power score.

Here is how: You should write a program that takes several lines of input from a
user (see the below example). The first line of the input indicates the number
of robots to be deployed. Each subsequent line shows the height, the weight, the
power of the engines and a resistance rating (1,2, or 3) of each of of these
robots. Your program should use this information to calculate the total power of
these robots. The power of all robots is the sum of the power of each robot,
where the power of an individual robot is calculated via:

(enginePower + resistance) * (weight - height)
Example
Input:
2
50 60 2 1
43 62 5 2
Output:
163
Here the output in this example is the calculation

(2 + 1) * (60-50) + (5 + 2) * (62-43)

You must use a loop to read each of the lines!
*/
#include <stdio.h>

int main() {
  int n = 0, i = 0;
  // j = 0;
  int weig = 0, hei = 0, re = 0, epow = 0;
  int sum = 0;
  // take the number of robots
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &hei);
    scanf("%d", &weig);
    scanf("%d", &re);
    scanf("%d", &epow);
    //(enginePower + resistance) * (weight - height)
    // sum of  the power of an individual robot
    sum += (weig - hei) * (epow + re);
  }
  printf("%d", sum);
  return 0;
}