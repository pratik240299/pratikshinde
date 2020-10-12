
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 char ch1[n];
	 char ch2[n];

	 printf("Enter the element in array1 : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf(" %c",&ch1[i]);
	 }
	 printf("Enter the element in array2 : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf(" %c",&ch2[i]);
	 }
	 void* vptr1[n];
	 void* vptr2[n];
	 for(int i = 0; i < n; i++) {
	 	
		 vptr1[i] = &ch1[i];
	 	 vptr2[i] = &ch2[i];
	 }
	 printf("Array1 : ");
	 for(int i = 0; i < n; i++) {
	 
		 //vptr1[i] = (char*)vptr1 + i;
		 printf("%c ",*(char*)vptr1[i]);
	 }
	 printf("\nArray2 : ");
	 for(int i = 0; i < n; i++) {
	 
		 //vptr2[i] = (char*)vptr2 + i;
		 printf("%c ",*(char*)vptr2[i]);
	 }
	 printf("\n");

 }

/*
Enter the size of array : 3
Enter the element in array1 : A B C
Enter the element in array2 : D E F
Array1 : A B C
Array2 : D E F

*/
