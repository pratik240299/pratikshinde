
#include<stdio.h>

 void main() {
 
	 int num1, num2;
	 printf("Enter the number : ");
	 scanf("%d %d",&num1,&num2);

	 if(num1 > num2)
		 printf("the Minimum number amongst %d & %d is %d\n",num1,num2,num2);
	 else if(num2 > num1)
		 printf("the Minimum number amongst %d & %d is %d\n",num1,num2,num1);
 }

/*
 *
Enter the number : 56 99
the Minimum number amongst 56 & 99 is 56

 */
