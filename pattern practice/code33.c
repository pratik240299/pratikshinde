
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 5; i++) {
	 
		 int count = 1;
		 char ch = 'A';

		 for(int j =1; j <= 5; j++) {
		 
			 if(i > count) {

				 count++;
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
 
A B C D E
  A B C D
    A B C
      A B
        A

*/
