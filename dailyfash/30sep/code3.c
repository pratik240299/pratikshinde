
#include<stdio.h>

 void main() {
 
	 int arr[10];
	 printf("Enter the element in array : ");

	 for(int i = 0; i < 10; i++) {
	
		 scanf("%d",&arr[i]);
	 }
	 int *iptr = arr;
	 printf("By array : \n");
	 for(int i = 0; i < 10; i++) {
	 
		printf("%d ",arr[i]);

	 }
	 printf("\nBy pointer addition : \n");
	 for(int i = 0; i < 10; i++) {
	 
		iptr = arr + i; 
		printf("%d ",*iptr);
	 }
	 int *new = arr;
	 printf("\nBy adding 1 to address : \n");
	 for(int i = 0; i < 10; i++) {
	 
		printf("%d ",*new);
		new = new + 1;
	 }
 }

/*
Enter the element in array : 1 2 3 4 5 6 7 8 9 10
By array :
1 2 3 4 5 6 7 8 9 10
By pointer addition :
1 2 3 4 5 6 7 8 9 10
By adding 1 to address :
1 2 3 4 5 6 7 8 9 10

*/
