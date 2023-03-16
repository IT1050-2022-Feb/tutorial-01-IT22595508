/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  int sub1, sub2, tot;
  float avg;
  printf("Enter subject 1 marks :");
  scanf("%d", &sub1);

  printf("Enter subject 2 marks :");
  scanf("%d", &sub2);

  tot = sub1 + sub2;

  avg = tot / 2;

  printf("Average of two subjects :%2.f", avg);

  return 0;
}
