
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 5; i++) {
	 
		 for(int k =4; k >= i; k--) {
		 
			 printf("  ");
		 }
		 for(int j =1; j <= i*2-1; j++) {
		 
			 printf("%d ",i);
		 
		 }
		 printf("\n");
	 }
 }

/*
 *
        1
      2 2 2
    3 3 3 3 3
  4 4 4 4 4 4 4
5 5 5 5 5 5 5 5 5

*/
