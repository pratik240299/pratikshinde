
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
			 
			 printf("%d\t",arr[i][j]);
			 if(arr[i][j] < 0 )
				 count++;
		 }
		 printf("\n");
		
	 }
	 printf("Count = %d\n",count);
 }

/*
 * Enter the element in array : 1 2 3 -1 -4 5 5 -4 0
output :
1	2	3
-1	-4	5
5	-4	0
Count = 3

*/

