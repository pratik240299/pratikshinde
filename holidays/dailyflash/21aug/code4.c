
#include<stdio.h>

 void main() {
 
	 int rows;
	 printf("Enter the number of rows : ");
	 scanf("%d",&rows);

	 for(int i =1 ; i <= rows; i++) {

		 for(int j = 2; j <= rows * 2; j = j + 2) {
		 
			 printf("%d ",j);
		 }
		 printf("\n");
	 }
 }

/*
 *
Enter the number of rows : 4
2 4 6 8
2 4 6 8
2 4 6 8
2 4 6 8
 
 */
