
#include<stdio.h>

 void main() {
 
	 for(int i = 1; i <= 5; i++) {
	 
		 for(int k = 4 ; k >= i ; k--) {
		 
			 printf("  ");
		 }
		 char x = 'A', y = 'A';
		 int a = 1;
		 for(int j =1; j <= i*2-1; j++) {
		 
			 if(a <= i) {
			 
				 printf("%c ",x);
				 x++;
			 }
			 else {
			 
				 printf("%c ",y);
				 y++;

			 }
			 a++i;
		 
		 }
		 printf("\n");
	 }
 }

/*
 *
 *      A
      A B A
    A B C A B
  A B C D A B C
A B C D E A B C D

*/
