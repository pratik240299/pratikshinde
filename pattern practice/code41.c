
#include<stdio.h>

 void main() {
 
	 for(int i = 1; i <= 5; i++) {
	 
		 char ch = 'A';
		 for(int k = 4; k >= i; k--) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= i*2-1; j++) {
		 
			 printf("%c ",ch);
			 ch++;
		 
		 }
		 printf("\n");
	 }
 }

/*
 *
        A
      A B C
    A B C D E
  A B C D E F G
A B C D E F G H I


*/
