
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
		 
			 printf("%d ",arr[i][j]);
			 if(j > i && arr[i][j]==0)
				count++; 
		 }
		 printf("\n");
	 }
	 if(count == 3)
		 printf("the matrix is lower matrix\n");
	 else
		 printf("the matrix is not lower matrix\n");
 }

/*
 * Enter the element in array : 1 0 0 4 2 0 6 5 2
1 0 0
4 2 0
6 5 2
the matrix is lower matrix

*/
