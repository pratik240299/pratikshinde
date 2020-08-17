
#include<stdio.h>

 void main() {
 
	 int x = 4;
	 for(int i = 1; i <= 4; i++) {
	 
		 for(int k = 1; k < i ; k++) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= x*2-1; j++) {
		 
			 printf("%c ",64 + x*2-1);
		 }
		 x--;
		 printf("\n");
	 }
 }

/*
 *
G G G G G G G
  E E E E E
    C C C
      A

*/      
