
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 5; i++) {
	 
		 int x= 70-i;
		 for(int j =1; j <= 5; j++) {
		 
			 if(i + j <= 5) {
			 
				 printf("  ");
			 }
			 else {

				 printf("%c ",x);
				 x++;
					 
			 }
		 }
		 printf("\n");
	 } 
 }

/*
 *
        E
      D E
    C D E
  B C D E
A B C D E

*/
