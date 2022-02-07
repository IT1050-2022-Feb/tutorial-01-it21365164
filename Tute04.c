/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>



#include<stdio.h>

int minimum(int n1 ,int n2){
   int min;
 
    if(min>n1){
         if(min>n2){ 
          min=n2;  
         }
    }
     
    else if(min<n2){
         if(min<n1){ 
          min=n1;  
         }
    }
   
   
   
   return min;
}

int maximum(int n1 ,int n2){
	int max;
	 if(max>n1){
         if(n1>n2){ 
          max=n2;  
         }
    }
     
    else if(max<n2){
         if(n2<n1){ 
          max=n1;  
         }
    }
    
    return max;
}
int multiply(int n1 ,int n2){
   
   return n1*n2;
}

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   
    printf("%d ", minimum(no1, no2));
    
	printf("%d ", maximum(no1, no2));
	
    printf("%d ", multiply(no1, no2));
    
   return 0;
}
