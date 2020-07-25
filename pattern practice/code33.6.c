
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 5; i++) {
	 
		 int ch = 65;
		 for(int j =1; j <= 5; j++) {
		 
			 if(i + j <= 5) {
			 
				 printf("  ");
			 }
			 else {
			 
				 printf("%c ",ch);
				 ch++;
			 }
			 
		 }
		 printf("\n");
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
