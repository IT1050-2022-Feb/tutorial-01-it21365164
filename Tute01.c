/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

include <stdio.h>

int main() {

  int num1,num2;
  float average;
  int sum;

  printf("Enter mark 1 : ");
  scanf("%d",&num1);

  printf("Enter mark 2 : ");
  scanf("%d",&num2);

  sum = num1 + num2;
  average = sum/2.0;

  printf("Average is %.2f",average);
  return 0;
}