
#include<stdio.h>

 void main() {
 
	 int num1, num2, num3;
	 printf("Enter the 3 numbers : ");
	 scanf("%d %d %d",&num1,&num2,&num3);

	 if(num1 > num2 && num1 > num3)
		 printf("the maximum number amongst %d ,%d & %d is %d\n",num1,num2,num3,num1);
	 else if(num2 > num1 && num2 > num3)
		 printf("the maximum number amongst %d ,%d & %d is %d\n",num1,num2,num3,num2);
	 else if(num3 > num2 && num3 > num1)
		 printf("the maximum number amongst %d ,%d & %d is %d\n",num1,num2,num3,num3);
 }

/*
 *
 * Enter the 3 numbers : 56 7 99
   the maximum number amongst 56 ,7 & 99 is 99
 */

