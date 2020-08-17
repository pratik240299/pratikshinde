
#include<stdio.h>

 void main() {

 	 int x = 4; 
	 for(int i =1; i <= 4; i++) {
	 
		 for(int k = 1; k < i; k++) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= x*2-1; j++) {
		 
			 printf("%d ",j);
		 }
		 x--;
		 printf("\n");
	 }
 }

/*
 
1 2 3 4 5 6 7
  1 2 3 4 5
    1 2 3
      1

*/      
