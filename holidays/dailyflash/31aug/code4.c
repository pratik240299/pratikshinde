
#include<stdio.h>

 void main() {
 
	 int rows;
	 printf("Enter the rows : ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 for(int j = 1; j <= i; j++){
		 
			 if(i % 2 == 0)
				 printf("1 ");
			 else 
				 printf("0 ");
		 }
		 printf("\n");
	 }
 }

/*
 *
 * Enter the rows : 5
0
1 1
0 0 0
1 1 1 1
0 0 0 0 0

*/
