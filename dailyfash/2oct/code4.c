
#include<stdio.h>

 void main() {
 
	 int n;
	 int a = 0; 
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int arr1[n];
	 int *iptr1 = arr1;
	 int arr2[a];
	 int *iptr2 = arr2;

	 printf("Enter the array eleent : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&(*(iptr1 + i)));
	 }
	 printf("First array : ");
	 for(int i = 0; i < n; i++) {
	 
		 printf("%d ",*(iptr1 + i));
	 }
	 printf("\nSecond array : ");
	 for(int i = 0; i < n; i++) {
	 
		 if(*(arr1 + i) % 2 != 0) {
		 
			 *(iptr2 + a) = *(iptr1 + i);
			 printf("%d ",*(iptr2 + a));
			 a++;
			 arr1[a];
		 }
	 }
	 printf("\n");


 }

/*
 *
Enter the size of array : 5
Enter the array eleent : 1 2 3 4 5
First array : 1 2 3 4 5
Second array : 1 3 5

*/
