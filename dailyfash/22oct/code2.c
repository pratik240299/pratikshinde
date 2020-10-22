
#include<stdio.h>

 int swap1,swap2;
 void dis_array(int *iptr1,int *iptr2,int x) {
 
	 printf("Array1 : ");
	 for(int i = 0; i < x; i++) {
	 
		 printf("%d ",*(iptr1 + i));
	 }
	 printf("\nArray2 : ");
	 for(int i = 0; i < x; i++) {
	 
		 printf("%d ",*(iptr2 + i));
	 }
 }
 
 void swap_num(int *sptr1,int *sptr2,int x) {
 
	 for(int i = 0; i < x; i++) {
	 
		 swap1 = *(sptr1 + i);
		 *(sptr1+i) = *(sptr2+i);
		 *(sptr2+i) = swap1;
	 }
	 printf("Array1 : ");
	 for(int i = 0; i < x; i++) {
	 
		 printf("%d ",*(sptr1 + i));
	 }
	 printf("\nArray2 : ");
	 for(int i = 0; i < x; i++) {
	 
		 printf("%d ",*(sptr2 + i));
	 }
 }
 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int arr1[n];
	 int arr2[n];

	 printf("Enter the element in array1 : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr1[i]);
	 }
	 printf("Enter the element in array2 : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr2[i]);
	 }
	 printf("OUTPUt : \n");
	 printf("Element of array before calling the function : \n");
	 dis_array(arr1,arr2,n);
	 
	 printf("\nElement of array after calling the function : \n");
	 swap_num(arr1,arr2,n);
	 printf("\n");

 } 

/*
Enter the size of array : 5
Enter the element in array1 : 10 20 30 40 50
Enter the element in array2 : 1 2 3 4 5
OUTPUt :
Element of array before calling the function :
Array1 : 10 20 30 40 50
Array2 : 1 2 3 4 5
Element of array after calling the function :
Array1 : 1 2 3 4 5
Array2 : 10 20 30 40 50

*/
