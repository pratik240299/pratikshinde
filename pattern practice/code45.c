
#include<stdio.h>

 void main() {
 
	 for(int i = 1; i <= 4; i++) {
	 
		 int a = 1, x = 1; 
		 for(int k = 3; k >= i; k-- ) {
		 
			 printf("  ");
		 } 
		 for(int j = 1; j <= i*2-1; j++) {
		 
			 printf("%d ",x);

			 if(a >= i)
				 x--;
			 else {
				 x++;
			 }
			 a++;
		 }
		 printf("\n");
	 }
 
 }

/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/
