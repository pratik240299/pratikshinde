
#include<stdio.h>

 void main() {
 
	 int x = 4; 
	 for(int i = 1; i <= 4; i++) {
	 
		 for(int j =1; j <i; j++) {
		 
			 printf("  ");

		 }
		 for(int k = 1; k <= x*2-1; k++) {
		 
			 printf("%d ",x*2-1);
		 }
		 x--;
		 printf("\n");
	 }
 }

/*
7 7 7 7 7 7 7
  5 5 5 5 5
    3 3 3
      1
*/
