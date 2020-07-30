
#include<stdio.h>

 void main() {
 
	 char ch = 'A';
	 for(int i =1; i <= 4; i++) {
	 
		 for(int k = 3; k >= i; k--) {
		 
			 printf("  ");

		 }
		 for(int j = 1; j <= i*2-1; j++ ) {

			 printf("%c ",ch);
			 
		 }
		 ch++;
		 printf("\n");
	 }
 }

/*
 *
      A 
    B B B 
  C C C C C 
D D D D D D D 

*/
