
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int arr1[n];
	 int arr2[n];
	 int count = 0;

	 printf("Enter the element in array1 : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr1[i]);
	 }
	 printf("Enter the element in array2 : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr2[i]);
	 }
	 for(int i = 0; i < n; i++) {
	 
		 for(int j = 0; j < n; j++) {
		 
			 if(arr1[i] == arr2[j])
				 count++;
		 }
	 }
	 if(count == n)
		printf("Both array are equal\n");
	 else
		printf("Both array are not equal\n");

	 
 }

/*
 * Enter the size of array : 5
Enter the element in array1 : 2 5 1 7 3
Enter the element in array2 : 3 5 1 2 7
Both array are equal

*/
