
#include<stdio.h>

 void main() {
 
	 int x = 0;
	 for(int i =1; i <= 5; i++) {
	 
		 int a = 1;
		 for(int k = 4; k >= i; k--) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= i*2-1; j++) {
		 
			 if(a >= i) {
			 
				 printf("%d ",x);
				 x++;
			 }
			 else {
			 
				 printf("%d ",x);
				 x--;
			 }
			 a++;

		 }
		 printf("\n");
	 }
 }

/*
 *
        0
      1 0 1
    2 1 0 1 2
  3 2 1 0 1 2 3
4 3 2 1 0 1 2 3 4

*/
