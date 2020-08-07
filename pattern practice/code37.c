
#include<stdio.h>

 void main() {
 
	 int rows; 
	 printf("rows: ");
	 scanf("%d",&rows);
 	 
	 for(int i =1; i <= rows; i++) {
	
		int ch = 64 + i; 
		 for(int k = rows-1; k >= i ; k--) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= i*2-1; j++) {
		 
			 printf("%c ",ch);
		 }
		 printf("\n");
	 }
 }

/*
 *
 rows: 6
          A 
        B B B 
      C C C C C 
    D D D D D D D 
  E E E E E E E E E 
F F F F F F F F F F F 


*/
