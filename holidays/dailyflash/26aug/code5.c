
#include<stdio.h>

 void main() {
 
	 int rows;
	 printf("Enter the rows: ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 for(int j = 1; j <= i; j++) {
		 
			 printf("0 ");
		 }
		 printf("\n");
	 
	 }
}

/*
Enter the rows: 4
0
0 0
0 0 0
0 0 0 0
 
 */
