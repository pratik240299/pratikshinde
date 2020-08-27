
#include<stdio.h>

 void main() {
 
	 int num1,num2,sub;
	 printf("Enter the numbers : ");
	 scanf("%d %d",&num1,&num2);
	 int var1 = num1, var2 = num2;

	 var1 = var1 * var1;
	 var2 = var2 * var2;

	 num1 = num1 * num1 * num1;
	 num2 = num2 * num2 * num2;

	 int add = num1 + num2;
	 printf("addition is %d\n",add);
	 
	 if(var1 < var2) {
	 
		 sub = var2 - var1;
		 printf("subtraction is %d\n",sub);
	 }
	 else {
	 
		 sub = var1 - var2;
		 printf("subtracion is %d\n",sub);
	 }
 }

/*
 * Enter the numbers : 10 20
   addition is 9000
   subtraction is 300


 *
 */
