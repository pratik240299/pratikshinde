
#include<stdio.h>

 void main() {
 
	 int x = 4, n = 3;
	 for(int i = 1; i <= 7; i++) {

		 if(i <= 4) {
	 
			 for(int k = 1; k <= 7 - x; k++) {
		 
				 printf("  ");
				
		 	 }
			 x++; 
		 	 for(int j = 1; j <= i; j++) {
		 
				 printf("* ");
			 }
			 printf("\n");
	 
        	}
		else {
		 
			x = 4;
			for(int l = 1; l <= i-x; l++) {
			
				printf("  ");
			}
			for(int m = 1; m <= n; m++ ) {
			
			i	printf("* ");
			}
			n--;
			printf("\n");

		 } 
	}
 }

/*
 *
      * 
    * * 
  * * * 
* * * * 
  * * * 
    * * 
      * 
 
*/
