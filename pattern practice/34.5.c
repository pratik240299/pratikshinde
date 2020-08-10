
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 5; i++) {
	 
		 int ch = 64 + i*2-1;
		 for(int k =4; k >= i; k--) {
		 
			 printf("  ");

		 }
		 for(int j = 1; j <= i*2-1; j++) {
		 
			 printf("%c ",ch);
			 ch--;
		 }
		 printf("\n");
	 }
 }

/*
 *
        A
      C B A
    E D C B A
  G F E D C B A
I H G F E D C B A

*/
