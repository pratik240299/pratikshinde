
#include<stdio.h>

 void main() {
 
	 for(int i = 1; i <= 5; i++) {
	 
		 int ch = 64+i;

		 for(int j =1; j <= 5; j++) {
		 
			 if(i + j <= 5) {
			 
				 printf("  ");
			 }
			 else {
			 
				 printf("%c ",ch);
				 ch--;
			 }
		 }
		 printf("\n");
	 }
 }

/*
 *
        A
      B A
    C B A
  D C B A
E D C B A

*/


