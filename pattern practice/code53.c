
#include<stdio.h>

 void main() {
 
	 int x = 4;
	 for(int i =1; i <= 4; i++) {
	 
		 for(int k = 1; k < i; k++) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= x*2-1; j++) {
		 
			 printf("%c ",64 + j);
		 }
		 x--;
		 printf("\n");
	 }
 }

/*
 *
A B C D E F G
  A B C D E
    A B C
      A
*/
