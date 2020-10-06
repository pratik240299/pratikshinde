
#include<stdio.h>

 void main() {
 
	 int arr[3][3];
	 int count = 0;

	 printf("Enter the element in array : ");
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
			 scanf("%d",&arr[i][j]);
		 }
	 }
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
			 if(i == j)
				 printf("%d ",arr[i][j] * arr[i][j]);
		 }
	 }
	 printf("\n");



 }

/*
 *
 * Enter the element in array : 1 2 3 4 5 6 7 8 9
1 25 81

*/


