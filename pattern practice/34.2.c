
#include<stdio.h>
 
 void main() {
 
	 for(int i =1; i <= 5; i++) {
	 
		 for(int k = 4; k >= i; k--) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= i*2-1; j++) {
		 
			 printf("%d ",i*2-1);
		 
		 }
		 printf("\n");
	 }
 }

/*
 *
 *       1
      3 3 3
    5 5 5 5 5
  7 7 7 7 7 7 7
9 9 9 9 9 9 9 9 9

*/
