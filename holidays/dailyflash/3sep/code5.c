
#include<stdio.h>

 void main() {
 
	 int num1,num2,num3;
	 printf("Enter the three number : ");
	 scanf("%d %d %d",&num1,&num2,&num3);

	 printf("The Minimum number amongst %d ,%d & %d is ",num1,num2,num3);

	 if(num1 <= num2 && num1 <= num3)
		 printf("%d\n",num1);
	 else if(num2 <= num1 && num2 <= num3)
		 printf("%d\n",num2);
	 else if(num3 <= num2 && num3 <= num1)
		 printf("%d\n",num3);
	 
 }

/*
 *
Enter the three number : 56 7 99
The Minimum number amongst 56 ,7 & 99 is 7

*/
