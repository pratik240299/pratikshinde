
#include<stdio.h>

 void main() {
 
	 int rows;
	 printf("Enter the rows : ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 for(int j = 1; j <= i ; j++) {
		 
			 printf("%d ",i);
		 }
		 printf("\n");

	 
	 }
 }

/*
 *
Enter the rows : 4
1
2 2
3 3 3
4 4 4 4

*/
