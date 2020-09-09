
#include<stdio.h>

 void main() {
 
	 int num1,num2,store = 0;
	 printf("Enter the 2 number : ");
	 scanf("%d %d",&num1,&num2);
	
		 for(int i = 1; i < num1; i++) {
		 
			 if(num1 % i == 0 && num2 % i == 0)
				 store = i; 
		 }
		 printf("The GCD of %d & %d is %d\n",num1,num2,store);
	 
 }

/*
 *
 * Enter the 2 number : 25 15
   The GCD of 25 & 15 is 5
 */
