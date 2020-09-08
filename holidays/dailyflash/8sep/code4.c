
#include<stdio.h>

 void main() {
 
	 int rows; 
	 printf("Enter the rows : ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 int num = rows * 2 - i;
		 for(int j = 1; j <= i; j++) {
		 
			 printf("%d ",num);
			 num--;
		 }
		 printf("\n");
	 }
 }

/*
 *
Enter the rows : 4
7
6 5
5 4 3
4 3 2 1

*/
