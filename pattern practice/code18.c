
#include<stdio.h>
 
 void main() {
 
	 int ch = 'A';
	 for(int i = 1; i <= 5; i++) {
	 
		 for(int j = 5; j >= i; j--) {
		 
			 printf("%c ",ch);
		 } 

		 ch++;
		 printf("\n");
	 }
 }

/*
 
A A A A A
B B B B
C C C
D D
E

*/

 
