
#include<stdio.h>

 void main() {
 
	 int x = 4;
	 for(int i =1; i <= 4; i++) {
	 
		 for(int k = 1; k < i ; k++) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= x*2-1; j++) {
		 
			 printf("%d ",x);
		 }
		 x--;
		 printf("\n");
	 }
 }

/*
4 4 4 4 4 4 4
  3 3 3 3 3
    2 2 2
      1
*/
