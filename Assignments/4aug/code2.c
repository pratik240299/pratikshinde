
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 4; i++) {
	 
		 int x = 1;
		 for(int j = 1; j <= 4; j++) {
		 
			 if(i + j <= 4) {
			 
				 printf(" ");
			 }
			 else {
			 
				 printf("%d ",x);
				 x++;

			 }

		 }
		 printf("\n");
	 }
 }

/*
      1
    1 2
  1 2 3
1 2 3 4

*/
