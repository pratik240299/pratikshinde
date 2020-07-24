
#include<stdio.h>

 void main() {
 
	 int num = 1;
	 int i = 1;

	 while( i <= 5) {
	 
		 int j = 1;
		 while(j <= i) {
		 
			 printf("%d ",num);
			 num++;
			 j++;
		 }
		 printf("\n");
		 num--;
		 i++;
	 }
	 
 }

/*
1 
1 2 
2 3 4 
4 5 6 7 
7 8 9 10 11 
*/


