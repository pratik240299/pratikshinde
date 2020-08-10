

#include<stdio.h>

 void main() {
 
	 int rows; 
	 printf("Enetr the rows: ");
	 scanf("%d",&rows);

	 for(int i = 0; i <= rows; i++) {
	
		 int count = 0;
		 for(int j = 0; j <= rows; j++) {
		 
			 if(count < i) {
			 
				 count ++;
				 printf(" \t");
			 }
			 else {
			 
				 printf("%d\t",j*(j + i));

			 }
		 }
		 printf("\n");
	 }
 
 }

/*
 * 0	1	4	9	16
 	2	6	12	20
 	 	8	15	24
 	 	 	18	28
 	 	 	 	32
*/
