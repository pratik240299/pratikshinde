
#include<stdio.h>

 void main() {

	 int arr[5];
	 int sum = 0;
	 printf("Enter the element in array : ");

	 for(int i = 0; i < 5; i++) {
	 
		 scanf("%d",&arr[i]);
	 }
	 int *iptr = arr;
	 int *ansptr = iptr;
	 printf("Element in array : ");
	 for(int i = 0; i < 5; i++) {
	 
		 ansptr = iptr + i;
		 printf("%d\n",*ansptr);
		 sum = sum + *ansptr;
	 }
	 printf("Sum = %d\n",sum);
 }

/*
 * Enter the element in array : 1 2 3 4 5
Element in array : 1
2
3
4
5
Sum = 15

*/
