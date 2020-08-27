
#include<stdio.h>

 void main() {
 
	 int num1, num2;
	 char opa;
	 printf("Enter First number : ");
	 scanf("%d",&num1);
	 printf("Enter Second number : ");
	 scanf("%d",&num2);
	 printf("Enter the sign of operation : ");
	 scanf(" %c",&opa);
	 float point1 = num1, point2 = num2;

	 switch(opa) {
	 
		 case '+':
			 printf("addition of %d & %d is %d\n",num1,num2,num1 + num2);
			 break;	 
		 case '-':
			 printf("addition of %d & %d is %d\n",num1,num2,num1 - num2);
			 break;	 
		 case '*':
			 printf("addition of %d & %d is %d\n",num1,num2,num1 * num2);
			 break;	 
		 case '/':
			 printf("addition of %0.0f & %0.0f is %0.1f\n",point1,point2,point1 / point2);
			 break;	 
		 case '%':
			 printf("addition of %d & %d is %d\n",num1,num2,num1 % num2);
			 break;	 
	 }
 }

/*
 *
 * Enter First number : 10
   Enter Second number : 20
   Enter the sign of operation : +
   addition of 10 & 20 is 30

