
#include<stdio.h>
  
 void main() {

	 int rows;
	 printf("rows: ");
	 scanf("%d",&rows);
	 for(int i =1; i <= rows; i++) {

			 
		 for(int k =rows-1; k >= i; k--) {
		 
			 printf(" \t");
		 }
		 for(int j = 1; j <=i*2-1; j++ ) {
		 
			 printf("%d\t",i*2-1);
		 }
		 printf("\n");
	 }
 }

/*
 *
 * rows: 7
 	 	 	 	 	 	1
 	 	 	 	 	3	3	3
 	 	 	 	5	5	5	5	5
 	 	 	7	7	7	7	7	7	7
 	 	9	9	9	9	9	9	9	9	9
 	11	11	11	11	11	11	11	11	11	11	11
13	13	13	13	13	13	13	13	13	13	13	13	13

*/
