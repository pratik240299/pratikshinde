
#include<stdio.h>

 void main() {
 
	 int num1,num2,div;
	 printf("Enter the numbers : ");
	 scanf("%d %d",&num1,&num2);

	 int mult = num1 * num2;
	 printf("multiplication is %d\n",mult);
	 
	 if(num1 < num2) {
	 
		 div = num2 / num1;
		 printf("division is %d\n",div);
	 }
	 else {
	 
		 div = num1 / num2;
		 printf("division is %d\n",div);
	 }
 }


/*
 *
 *Enter the numbers : 10 20
  multiplication is 200
  division is 2


 */
