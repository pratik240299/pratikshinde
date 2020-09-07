
#include<stdio.h>

 void main() {
 
	 int a,b;
	 printf("Enter the 2 number : ");
	 scanf("%d %d",&a,&b);

	 printf("Before swap: a = %d & b = %d\n",a,b);
	 a = a + b;
	 b = a - b;
	 a = a - b;

	 printf("After swap a = %d & b = %d\n",a,b);
 }

/*
 *
Enter the 2 number : 10 20
Before swap: a = 10 & b = 20
After swap a = 20 & b = 10

*/
