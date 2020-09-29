
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array  : ");
	 scanf("%d",&n);

	 int arr[n];
	 printf("Enter the element in array : ");
	 
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr[i]);
	 }
	 int *iptr = arr;
	 int *ansptr = 0;
	 
	 printf("reverse of element : ");
	 for(int i = n-1; i >= 0 ; i--) {
	 

       		 ansptr = iptr + i;
		 printf("%d ",*ansptr);
	 }
	 printf("\n");

 }

/*
Enter the size of array  : 5
Enter the element in array : 1 2 3 4 5
reverse of element : 5 4 3 2 1

*/
