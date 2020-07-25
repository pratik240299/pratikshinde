
#include<stdio.h>

 void main() {
 
	 for(int i = 1; i <= 5; i++) {

	 	 int x =0;
		 for(int j =1; j <= 5; j++) {
		 
			 if(i + j <= 5) {
			 
				 printf("  ");
			 }
			 else {
			 
				 printf("%d ",x+i);
				 x--;
			 }
		 }
		 printf("\n");
	 }
 }

/*
 *
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1

*/
