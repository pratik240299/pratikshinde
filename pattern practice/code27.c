
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 5; i++) {
	 
		 int x = 1;
		 for(int j = 1; j <= 5; j++) {
		 
			 if(i + j <= 5) {
			 
				 printf("  ");
			 }
			 else {
			 
				 printf("%d ", x);
				 x++;
			 }

		 }
		 printf("\n");
	 }
 }

/*
 *
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5

*/
