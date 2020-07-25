
#include<stdio.h>
 
 void main() {
 
	 for(int i =1; i <= 5; i++) {
	 
		 int ch = 'A';
		 for(int j = 1; j <= i; j++) {
		 
			 printf("%c ",ch);
			 ch++;
		 }
		 printf("\n")i;
	 }
 }


/*
 *
A
A B
A B C
A B C D
A B C D E

*/
