
#include<stdio.h>

 int add_num(int *iptr1, int *iptr2,int i) {
 
 	int x = *(iptr1+i) + *(iptr2+i);
	return x;
 }

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int arr1[n];
	 int arr2[n];
	 int arr3[n];

	 printf("Enter the element in array1 : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr1[i]);
	 }
	 printf("Enter the element in array2 : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr2[i]);
	 }
	 printf("Addition : ");
	 for(int i = 0; i < n; i++) {
	 
		 arr3[i] = add_num(arr1,arr2,i);
		 printf("%d ",arr3[i]);
	 }
	 printf("\n");
 } 

/*
Enter the size of array : 3
Enter the element in array1 : 1 2 3
Enter the element in array2 : 1 2 3
Addition : 2 4 6

*/
