
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 5; i++) {
	 
		 for(int k = 4; k >= i; k--) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= i*2-1; j++) {
		 
			 printf("%c ",64 + i*2-1);
		 
		 }
		 printf("\n");
	 
	 }

 
 }

/*
 *
        A
      C C C
    E E E E E
  G G G G G G G
I I I I I I I I I

*/
