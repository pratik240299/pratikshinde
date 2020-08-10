
#include<stdio.h>

 void main() {
 
	 int rows;
	 printf("Enter the number of rows: ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 for(int k = 4; k >= i; k--) {
		 
			 printf(" \t");
		 }
		 for(int j = 1; j <= i*2-1; j++) {
		 
			 if(j % 2 == 0)
				 printf("%d\t",(i-1)*2);
			 else 

	 }

 }
