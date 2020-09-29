
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int arr[n];
	 printf("Enter the eelement in array : ");

	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr[i]);
	 }
	 int *iptr = arr;

	 printf("Element in array : ");

	 for(int i = 0; i < n ; i++) {
	 
		 int *ans = iptr + i;
		 printf("%d ",*ans);
	 }
	 printf("\n");
 }

/*
Enter the size of array : 5
Enter the eelement in array : 10 20 30 40 50
Element in array : 10 20 30 40 50

*/

