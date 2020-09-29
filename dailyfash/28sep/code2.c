
#include<stdio.h>

 void main() {
 
	 int n; 
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int arr[n];
	 printf("Enter the element in array : ");
	
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr[i]);
	 }
	 int *iptr = arr;
	
	 printf("Array in forward direction : ");
	 for(int i = 0 ; i <= n-1; i++) {
	 
		 iptr = arr + i;
		 printf("%d ",*iptr);
	 }
	 printf("\nArray in reverse direction : ");
	 for(int i = n-1 ; i >= 0; i--) {
	 
		 iptr = arr + i;
		 printf("%d ",*iptr);
	 }
	 printf("\n");

 } 

/*
Enter the size of array : 4
Enter the element in array : 1 6 87 98
Array in forward direction : 1 6 87 98
Array in reverse direction : 98 87 6 1

*/
