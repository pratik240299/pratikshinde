
#include<stdio.h>

 void main() {
 
	 int num;
	 int rem = 0,x = 0;
	 printf("Enter the number :");
	 scanf("%d",&num);
	 int count = 0;

	 for(num ;num != 0;num = num / 10) {

		 rem = num % 10;
		 count++;

		 if(count == 1)
			 x = rem;
	 }
	 printf("first number : %d\n",rem);
	 printf("Second number :%d\n",x);
 } 

/*
 i
Enter the number :83467
first number : 8
Second number :7

*/
