
#include<stdio.h>

 void main() {
 
	 int num,fac = 1;
	 printf("Enter the number : ");
	 scanf("%d",&num);

	 for(int i = 1; i <= num; i++) {
	 
		 fac = fac * i;
	 }
	 printf("the factorial of 5 is %d\n",fac);
 }


/*
 *
 * Enter the number : 5
   the factorial of 5 is 120
 */
