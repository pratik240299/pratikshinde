
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
	 for(int i = 0; i < n; i++) {

		 int *iptr = &arr[i];
		 if(arr[i] % 2 == 0) {
		 
			*iptr = arr[i] + 10;
		 }
		 printf("%d ",*iptr);
	 }
 }
