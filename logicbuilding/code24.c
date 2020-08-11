
#include<stdio.h>

 void main() {
 
	 int a = 0,b = 1,c;
	 for(int i = 1; i <= 9; i++) {
	 
		 c = a + b;
		 printf("%d ",a);
		 a = b;
		 b = c;


	 }
	 printf("\n");
 }

/*
 * 0 1 1 2 3 5 8 13 21
*/
