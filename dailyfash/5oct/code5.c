
#include<stdio.h>

 void main() {
 
	 
	 int arr[3][3];

	 printf("Enter the array element : ");
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
			 scanf("%d",&(arr[i][j]));
		 }
	 }
	 printf("Array element: \n");
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
			 printf("%d ",arr[i][j]);
		 }
		 printf("\n");
	 }
	 printf("Final array : \n");
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
			 if(j == 0) {
			 
				 printf("%d ",arr[i][j+2]);
			 }
			 else if(j == 2) {
			 
				 printf("%d ",arr[i][j-2]);
			 }
			 else
			 	printf("%d ",arr[j][i]);
		 }
		 printf("\n");
	 }
 }

/*
 * Enter the array element : 1 2 3 4 5 6 7 8 9
Array element:
1 2 3
4 5 6
7 8 9
Final array :
3 4 1
6 5 4
9 6 7

*/


