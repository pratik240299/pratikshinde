
#include<stdio.h>
 
 void main() {
 
	 for(int i = 1; i <= 5; i++) {
	 
		 for (int j =5; j >= i ; j--) {
		 
			 printf("%d ",i);
		 }
		 printf("\n");
	 }

 }

/*
 *
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5

*/
