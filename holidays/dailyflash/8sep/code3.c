
#include<stdio.h>

 void main() {
 
	 int rows;
	 printf("Enter the rows : ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {

		 int num = 64 + i;
	 
		 for(int j = rows; j >= i; j--) {
		 
			 printf("%c ",num);
		 }
		 printf("\n");
	 }
 }

/*
 *
A A A A A
B B B B
C C C
D D
E

*/
