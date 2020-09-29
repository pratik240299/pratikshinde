
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 printf("Enter the Element in array : ");
	 int arr[n]; 

	 for(int i = 0; i < n ; i++) {
	 
		 scanf("%d",&arr[i]);
	 }

	 int *iptr = arr;
	 int *ansptr = 0;

	 printf("Output : ");
	 for(int i = 0; i < n; i++) {
		 
			 ansptr = iptr + i;
			 *ansptr = *ansptr + 1;
			 printf("%d ",*ansptr);
		
	 }
	 printf("\n");
 }

/*
 *
Enter the size of array : 5
Enter the Element in array : 1 2 8 6 4
Output : 2 3 9 7 5

*/
