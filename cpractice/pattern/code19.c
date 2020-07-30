i
#include<stdio.h>

 void main() {
 
	
	 int rows ;
	 printf("enter the number of rows: ");
	 scanf("%d",&rows);

         int num = 0;
	 for(int i = 1; i <= rows; i++) {
	
		 int count = 1;
		 for(int j = 1; j <= rows; j++) {
		 
			 if(i > count) {
			 
				 count++;
				 printf(" \t");
			 }
			 else {
			
				 num = num + j;
				 printf("%d\t",num);		 
				 

			 }

		 }
		 printf("\n");
	 }
 }

/*
 * 1	3	6	10
 	12	15	19
 	 	22	26
 	 	 	30
*/
