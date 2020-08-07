
#include<stdio.h>

 void main() {
 
	 int ch = 'A';
	 for(int i =1; i <= 5; i++) {
	 
		 int a = 1;
		 for(int k = 4; k >= i; k--) {
		 
			 printf("  ");

		 }
		 for(int j = 1; j <= i*2-1; j++) {
		 
			 if(a >= i) {
			 
				 printf("%c ",ch);
				 ch++;
			 }
			 else {
			 
				 printf("%c ",ch);
				 ch--;
			 }
			 a++;
		 }
		 printf("\n");
	 }
 }

/*
 *
        A
      B A B
    C B A B C
  D C B A B C D
E D C B A B C D E

*/
