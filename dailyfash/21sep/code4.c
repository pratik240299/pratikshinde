
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int num1[n];
	 int num2[n];
	 int num3[n];

	 printf("Enter the element in array1 : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&num1[i]);
	 }
	 printf("Enter the Element in array2 : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&num2[i]);
	 }
	 for(int i = 0; i < n; i++) {
	 
		 if(num2[i] % num1[i] == 0) {
		 
			 int fac = 1;
			 for(int j = 1; j <= num2[i]; j++) {
			 
				 fac = fac * j;
			 }
			 num3[i] = fac;
		 }
		 else {
		 
			 num3[i] = num1[i];
		 }
	 }
	 printf("Elemnent in array3 is : ");
	 for(int i = 0; i < n; i++) {
	 
		 printf("%d ",num3[i]);
	 }
	 printf("\n");

 }

/*
 *
Enter the size of array : 4
Enter the element in array1 : 2 2 1 8
Enter the Element in array2 : 5 4 5 3
Elemnent in array3 is : 2 24 120 8

*/
