
#include<stdio.h>

 void main() {
 
	 int rows,sum = 0;
	 printf("Enter the rows : ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 sum = sum + i;
	 }
	 printf("The sum of First %d natural number : %d\n",rows,sum);
 }


/*
 *
 * Enter the rows : 10
   The sum of First 10 natural number : 55
 */
