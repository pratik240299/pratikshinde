
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 4; i++) {
	 
		 char ch  = 'a';
		 for(int j = 1; j <= 4; j++) {
		 
			if(i + j <= 4) {
			
				printf("  ");
			}
			else {
			
				printf("%c ", ch);
				ch++;
			}
		 }
		 printf("\n");
	 }
 }

/*
 *
      a
    a b
  a b c
a b c d

*/



