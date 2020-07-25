
#include<stdio.h>

 void main() {
 
	 char ch = 'E';

	 for(int i =1; i <= 5; i++) {
	 
		 int count = 1;
	
		 for(int j =1; j <= 5; j++) {
		 
			 if(i > count) {
			 
				 count++;
				 printf("  ");
			 }
			 else {
			 
				 printf("%c ",ch);
				
				 
			 }
		 }
		 ch--;
		 printf("\n");
	 }
 }

/*

E E E E E
  D D D D
    C C C
      B B
        A
*/
