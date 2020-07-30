
#include<stdio.h>

 void main() {
 
	 for(int i = 1; i <= 4; i++) {
	 
		 for(int k = 3; k >= i; k--) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= i * 2 -1; j++) {

			 printf("* ");
		 }
		 printf("\n");
	 
	 }
 }

/*
 
      *
    * * *
  * * * * *
* * * * * * *

*/
