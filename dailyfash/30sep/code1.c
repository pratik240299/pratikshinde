
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
	 printf("Array in reverse order : ");
	 for(int i = n-1; i >= 0; i--) {
	 
		 iptr = arr + i;
		 printf("%d ",*iptr);
	 }
	 printf("\n");
	
 }

/*
Enter the size of array : 5
Enter the element in array : 12 4 23 5 67
Array in reverse order : 67 5 23 4 12

*/
