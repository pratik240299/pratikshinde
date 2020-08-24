
#include<stdio.h>

 void main() {
 
	 int rows,num = 0;
	 printf("Enter the rows : ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 for(int j = 1; j <= rows; j++) {
		 
			 printf("%d ",num);
		 }
		 printf("\n");
	 }
 
 
 }

/*
 *
Enter the rows : 4
0 0 0 0
0 0 0 0
0 0 0 0
0 0 0 0

*/
