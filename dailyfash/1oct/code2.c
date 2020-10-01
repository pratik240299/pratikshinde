
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int arr[n];
	 int first[n];
	 int base[n];
	 printf("Enter the array element : ");

	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr[i]);
	 }
	 int *iptr1 = arr;
	 int *iptr2 = &arr;

	 for(int i = 0; i <n; i++) {
	 
		first[i] = arr + i;
	 }
	 for(int i = 0; i < n; i++) {
	 
		 base[i] = &arr + i;
	 }
	 printf("Difference in arrays : ");
	 for(int i = 0; i < n; i++) {
	 
		 printf("%d\n",base[i] - first[i]);
	 }
 }  
