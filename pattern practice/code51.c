
#include<stdio.h>

 void main() {

 	 int x = 4; 
	 for(int i =1; i <= 4; i++) {

		 int ch = 64 + x;
		 for(int k = 1; k < i; k++) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= x*2-1; j++) {
		 
			 printf("%c ",ch);
		 }
		 x--;
		 printf("\n");
	 }
 }

/*

D D D D D D D
  C C C C C
    B B B
      A


*/      
