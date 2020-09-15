
#include<stdio.h>

 void main() {
 
	 int num[5];
	 int store[5];

	 printf("Enter the elements in array : ");

	 for(int i = 0; i < 5; i++) {
	 
		 scanf("%d",&num[i]);
	 }
	 printf("Array elements : ");
	 for(int j = 0; j < 5; j++) {
	 
		 printf("%d ",num[j]);

		 int fac = 1;
		 for(int k = 1; k <= num[j]; k++) {
		 
			 fac = fac * k;
		 }
		 store[j] = fac;

	 }
	 printf("\nFactorial of array : ");
	 for(int i = 0; i < 5; i++) {
	 
		 printf("%d ",store[i]);
	 
	 }
	 printf("\n");


 }


/*
 *
Enter the elements in array : 1 2 3 4 5
Array elements : 1 2 3 4 5
Factorial of array : 1 2 6 24 120

*/
