
#include<stdio.h>

 void main() {
 
	 int num;
	 for(int i = 1; i <= 5; i ++) {
	 
		 num = i*2-1;
		 for(int k = 4; k >= i; k--) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= i*2-1; j++) {
		 
			 printf("%d ",num);
			 num--;
		 }
		 printf("\n");
	 }
 }

/*
        1
      3 2 1
    5 4 3 2 1
  7 6 5 4 3 2 1
9 8 7 6 5 4 3 2 1

*/
