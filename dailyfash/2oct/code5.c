
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int arr1[n];
	 int *iptr1 = arr1;

	 printf("Enter the array eleent : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr1[i]);
	 }
	 printf("Output : ");
	 for(int i = 0; i < n; i++) {
	 
		 if(*(iptr1 + i) % 2 == 0) {
		 
			 printf("%d ",*(iptr1 + i));
		 }
	 }
	 printf("\n");
 }

/*
Enter the size of array : 5
Enter the array eleent : 23 12 56 277 122
Output : 12 56 122

*/


