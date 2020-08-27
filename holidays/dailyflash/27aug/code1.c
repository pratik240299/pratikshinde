
#include<stdio.h>

 void main() {
 
	 int num1,num2,sub;
	 printf("Enter the numbers : ");
	 scanf("%d %d",&num1,&num2);

	 int add = num1 + num2;
	 printf("addition is %d\n",add);
	 
	 if(num1 < num2) {
	 
		 sub = num2 - num1;
		 printf("subtraction is %d\n",sub);
	 }
	 else {
	 
		 sub = num1 - num2;
		 printf("subtracion is %d\n",sub);
	 }
 }


/*
 *Enter the numbers : 10 20
  addition is 30
  subtraction is 10

 *
 */
