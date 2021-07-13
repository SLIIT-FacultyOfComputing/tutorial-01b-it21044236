/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

int main() {

  int n;
  int count =0 , tot = 0;

  printf ("Enter a value for (n) :");
  scanf ("%d",&n);

  while (count<n)
  {
    count = count+1;
    tot = tot+count;
  }

  printf ("Sum =%d", tot);

  return 0;
}

