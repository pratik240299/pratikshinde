
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 4; i++) {
	 
		 int num = 0 + i;
		 for(int j =1; j <= 4; j++) {
		 
			 printf("%d ",num);
			 num++;

		 }
		 printf("\n");
	 }
 }

/*

1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7

*/
