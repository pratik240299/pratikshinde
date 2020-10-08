
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int arr[n];
	 printf("Enter the element in array : ");

	 int* arrptr[n];
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr[i]);
	 }
	 for(int i = 0; i < n; i++) {
	 	
		 arrptr[i] = &arr[i];
	 }
	 printf("element in array :  \n");
	 for(int i = 0; i < n; i++) {
	 
		 printf("%d\n",*(arrptr[i]));
	 }

 }

/*
Enter the size of array : 6
Enter the element in array : 1 2 3 4 5 6
element in array :
1
2
3
4
5
6

*/
