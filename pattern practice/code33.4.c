
#include<stdio.h>
 
 void main() {
 
	 for(int i =1; i <= 5; i++) {
	 
		 int ch = 67 + i;
		 int count = 1;
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

D E F G H
  E F G H
    F G H
      G H
        H

*/	
