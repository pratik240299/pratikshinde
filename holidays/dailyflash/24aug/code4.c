
#include<stdio.h>

 void main() {
 
	 int rows;
	 printf("Enter the rows : ");
	 scanf("%d",&rows);
	 
	 for(int i = 1; i <= rows; i++) {
	 
		 if(i % 2 == 0 )
			 printf("%d ",i);
	 }
	 printf("\n");
 }

/*
 *
 * Enter the rows : 50
   2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50
 */
