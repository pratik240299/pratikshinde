
#include<stdio.h>

 void main() {
 
	 int ch = 'A';
	 for(int i =1; i <= 5; i++) {
	 
		 
		 for(int j = 1; j <=5; j++) {
		 
			 if(i + j <= 5) {
			 
				 printf("  ");
			 }
			 else {
			 
				 printf("%c ",ch);
				 
			 }
		 }
		 ch++;
		 printf("\n");
	 }
 }

/*
 *
        A 
      B B 
    C C C 
  D D D D 
E E E E E 


*/
