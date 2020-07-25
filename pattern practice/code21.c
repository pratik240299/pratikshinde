
#include<stdio.h>

 void main() {
 
	 int num = 5;
	 for(int i = 1; i <=5; i++) {
	 
		 for(int j = 5; j >= i; j -- ) {
		 
			 printf("%d ",num);
		 }
		 num--;
		 printf("\n");

	 }


 }

/*
 *
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1

*/
