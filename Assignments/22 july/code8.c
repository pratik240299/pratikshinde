
#include<stdio.h>

 void main() {
 
	 int i = 1;

	 while(i <= 4) {
	 
		 int j = 1;
		 while(j <= i) {
		 
			 if(j == i)
				 printf("0 ");
			 else
				 printf("1 ");
			 j++;
		 }
		 printf("\n");
		 i++;

	 }
 }

/*

0 
1 0 
1 1 0 
1 1 1 0 

*/
