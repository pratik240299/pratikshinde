
#include<stdio.h>

 void main() {
 
	 int num = 4;
	 for(int i =1; i <= 4; i++) {
	 
		 char ch = 63 + num;
		 for(int k = 3; k >= i; k--) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= i*2-1; j++) {
		 
			 if(j <= i) {
			 
				 ch++;
				 printf("%c ",ch);
				 
			 }
			 else {
			 
				 ch--;
				 printf("%c ",ch);
				 
			 }
			 
		 }
		 num--;
		 printf("\n");
	 }
 }

/*
 *
      D
    C D C
  B C D C B
A B C D C B A

*/
