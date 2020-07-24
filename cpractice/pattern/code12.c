
#include<stdio.h>

 void main() {

	 
 
	 for(int i = 1; i <= 4; i++) {
	 
		 int x = 1;
		 for(int k = 3; k >= i; k--) {
		 
			 x++;
			 printf("  ");
		 }
		 for(int j = 1; j <= i; j++) {
		 
			printf("%c ",64+x);
			x++;	

		 }
		printf("\n");
	 } 
 }
