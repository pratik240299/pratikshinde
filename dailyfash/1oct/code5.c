
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int arr1[n];
	 printf("Enter the element in array1 : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr1[i]);
	 }
	 int *iptr1 = arr1;
	 
	 int arr2[n];
	 printf("Enter the element in array2 : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr2[i]);
	 }
	 int *iptr2= arr2;
	 
	 printf("Element in array2 is : ");
	 int arr3[n];
	 int *iptr3 = arr3;
	 for(int i = 0; i < n; i++) {
	 
		 *(iptr3 + i) = *(iptr2 + i) + *(iptr1 + i);
		  printf("%d ",*(iptr3 +i)); 
	 }
 } 


/*
 * Enter the size of array : 4
Enter the element in array1 : 1 2 3 4
Enter the element in array2 : 5 6 7 8
Element in array2 is : 6 8 10 12
*/
