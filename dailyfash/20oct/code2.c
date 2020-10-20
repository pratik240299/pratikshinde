
#include<stdio.h>

 int fac = 1;
 int fac_tor(int num) {
 
	 for(int i = 1; i <= num; i++) {
	 
		 fac = fac * i;
	 }
	 return fac;
 } 

 void main() {
 
	 int input;
	 printf("Enter the number : ");
	 scanf("%d",&input);

	 int val = fac_tor(input);
	 printf("factorial of %d is %d\n",input,val);
 }

/*
 * Enter the number : 5
   factorial of 5 is 120

 */
