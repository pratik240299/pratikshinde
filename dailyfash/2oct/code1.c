
#include<stdio.h>

 void main() {
 
	 int n1,n2;
	 printf("Enter the size of array1 : ");
	 scanf("%d",&n1);
	 printf("Enter the size of array2 : ");
	 scanf("%d",&n2);
	 
	 int arr1[n1];
	 int arr2[n2];
	
	 if(n1 != n2) {
	 
		 printf("as length of 2 array is not same to perform addition\n");
	 }
	 else {
	 	printf("Enter the element in 1st array : ");
	 	for(int i = 0; i < n1; i++) {
	 
			 scanf("%d",&arr1[i]);
		 }
	 	printf("Enter the element in 2st array : ");
	 	for(int i = 0; i < n2; i++) {
	 
			 scanf("%d",&arr2[i]);
	 	}
	 	int *iptr1 = arr1;
	 	int *iptr2 = arr2;

	 	if(n1 == n2) {
	 
			 printf("Addition of two array : ");
			 for(int i = 0; i < n1; i++) {
			 
				printf("%d " ,*(iptr1 + i) + *(iptr2 + i));
		 	}
		 	printf("\n");
	 	}
	 }
 }

/*
 * Enter the size of array1 : 5
Enter the size of array2 : 5
Enter the element in 1st array : 10 20 30 40 50
Enter the element in 2st array : 1 2 3 4 5
Addition of two array : 11 22 33 44 55

Enter the size of array1 : 4
Enter the size of array2 : 3
as length of 2 array is not same to perform addition

*/
