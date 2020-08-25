
#include<stdio.h>

 void main() {
 
	 int num,sum = 0;
	 printf("Enter the number : ");
	 scanf("%d",&num);

	 for(int i = 1; i <= num; i++) {
	 
		 sum = sum + i;
	 }
	 printf("the sum of number upto %d is : %d\n",num,sum);
 }

/*
 * Enter the number : 10
   the sum of number upto 10 is : 55

 */
