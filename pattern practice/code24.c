
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 5; i++) {
	 
		 int ch = 'E';
		 for(int j = 5; j >= i; j--) {
		 
			 printf("%c ",ch);
			 ch--;
		 }
		 printf("\n");
	 }
 }

/*
 *
E D C B A
E D C B
E D C
E D
E

*/
