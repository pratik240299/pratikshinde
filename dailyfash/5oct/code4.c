
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

	 printf("output : \n");
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
			 
			 printf("%d ",arr[i][j]);
		 }
		 printf("\n");
		
	 }
	 printf("Prime number in array : ");
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
			 int count = 0;
			 for(int k = 1; k <= arr[i][j]; k++) {
			 
				 if(arr[i][j] % k == 0)
					 count++;
			 }
			 if(count == 2)
				 printf("%d ",arr[i][j]);
	 	}
 	}
	printf("\n"); 
 }

/*
 * Enter the element in array : 1 2 3 4 5 6 7 8 9
output :
1 2 3
4 5 6
7 8 9
Prime number in array : 2 3 5 7 

*/

