
#include<stdio.h>

 void main() {
 
	 int rows;
	 printf("enter the rows :");
	 scanf("%d",&rows);
	 for(int i =1; i <= rows; i++) {
	 
		 if(i <= (rows + 1) / 2) {
		 
 			 for(int j = 1; j <= i; j++) {
			 
					 printf("* "); 
			}
			printf("\n");
		 }
		 else {
			 for(int k = 1; k <=(rows + 1 - i) ; k++) {
			 
				 printf("* ");
			 }
			 printf("\n");
		 }
	 }
 } 

/*

*
* *
* * *
* * * *
* * *
* *
*

 */
