/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1,mark2;
   float tot=0,avg;
   
   printf("Plz enter mark 1 :");
   scanf("%d",&mark1);
   printf("Plz enter mark 2 :");
   scanf("%d",&mark2);
   
   tot = mark1+mark2;
   avg = mark/2;
   
   printf("Average is %.2f",avg);
   
  return 0;
}

