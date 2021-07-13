/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int subject1,subject2;
  float avg;

  printf("Enter marks of first subject :");
  scanf("%d",&subject1);

  printf("Enter marks of secound subject :");
  scanf("%d",&subject2);

  avg = (subject1+subject2)/2;

  printf("Average of the two marks : %.2f",avg);
  
  return 0;
}

