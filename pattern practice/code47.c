
#include<stdio.h>

 void main() {
 
	 int x = 4;
	 for(int i =1; i <= 4; i ++) {
	 
		 for(int j = 1; j < i ; j++) {
		 
			 printf("  ");
		 }
		 for(int k = 1; k <= x*2-1; k++) {
		 
			 printf("* ");
		 }
		 x--;
		 printf("\n");
	 }

 }

/*
 *
* * * * * * *
  * * * * *
    * * *
      *

*/    
