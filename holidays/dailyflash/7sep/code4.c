
#include<stdio.h>

 void main() {
 
	 int rows;
	 printf("Enetr the rows : ");
	 scanf("%d",&rows);
	 int num = rows * 2 -1;

	 for(int i = 1; i <= rows; i++) {
	 	
		 for(int j = 1; j <= i; j++) {
		 
			 printf("%d ",num);
			 num--;
		 }
		 num++;
		 printf("\n");
	 }
 }

/*
 *
Enter the rows : 4
7
7 6
6 5 4
4 3 2 1

*/
