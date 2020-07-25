
#include<stdio.h>

 void main() {
 
	 for(int i = 1; i <= 5; i ++) {
	 
		 int ch = 'A';
		 for(int j = 5; j >= i; j--) {
		 
			 printf("%c ",ch);
			 ch++;
		 }
		 printf("\n");
	 }
 }
 

/*
 *
A B C D E
A B C D
A B C
A B
A

*/
