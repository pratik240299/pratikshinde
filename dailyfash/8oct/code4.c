
#include<stdio.h>

 void main() {
 
	 int num1,num2;
	 printf("Enter the number1 :");
	 scanf("%d",&num1);
	 printf("Enter the number2 :");
	 scanf("%d",&num2);

	 int add = num1 + num2;
	 int sub = num1 - num2;
	 int mult = num1 * num2;
	 int div = num1 / num2;

	 int *iptr1 = &add;
	 int *iptr2 = &sub;
	 int *iptr3 = &mult;
	 int *iptr4 = &div;

	 int* arrptr[4] = {iptr1,iptr2,iptr3,iptr4};

	 for(int i = 0; i < 4; i++) {
	 
		 printf("%d ",*(arrptr[i]));
	 }
	 printf("\n");

 }

/*
Enter the number1 :20
Enter the number2 :10
30 10 200 2

*/


