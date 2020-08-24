
#include<stdio.h>

 void main() {
 
	 int rows;
	 printf("Enter the rows : ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 if(i % 2 != 0)
			 printf("%d ",i);
	 }
	 printf("\n");
 
 }


/*
 *
 * Enter the rows : 50
   1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49
 */

