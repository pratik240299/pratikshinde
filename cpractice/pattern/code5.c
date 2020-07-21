
#include<stdio.h>

 void main() {

 	 int x=5;

	 for(int i =1; i <= 5; i++) {
	 
		 
		 for(int j =5; j >= i; j--) {
		 
			 
			 printf("%d ",x*x);
			
		 }
		 x--;
		 printf("\n");
		 
	 
	 }
 
 }

/*

25 25 25 25 25
16 16 16 16
9 9 9
4 4
1

*/

