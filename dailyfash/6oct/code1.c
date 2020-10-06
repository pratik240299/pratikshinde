
#include<stdio.h>

 void main() {
 
	 int arr[3][3];
	 int count1 = 0,count2 = 0;

	 printf("Enter the element in array : ");

	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
			 scanf("%d",&arr[i][j]);
		 }
	 }
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
			 printf("%d ",arr[i][j]);
		 }
		 printf("\n");
	 }
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
			 if(i == j) {
			 
				 if(arr[i][j] == 1)
					 count1++;
				 else
					 count2++;
			 }
			 else if(i != j) {
			 
				 if(arr[i][j] == 0)
					 count1++;
				 else
					 count2++;
			 }	 
		 }
	 }
	 if(count1 == 9)
		 printf("Given matrix is identity matrix\n");
	 else
		 printf("Given matrix is not identity matrix\n");
	 
 }

/*
 *
 * Enter the element in array : 1 0 0 0 1 0 0 0 1
1 0 0
0 1 0
0 0 1
Given matrix is identity matrix

*/
