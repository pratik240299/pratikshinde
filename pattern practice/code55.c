
#include<stdio.h>

 void main() {
 
	 for(int i = 1; i <= 7; i++) {
	 
		 int num = 3;
		 if(i <= 4) {
		 
			 for(int j = 1; j <= i; j++) {
			 
				 printf("%d ",num);
				 num--;
			 }
			 //printf(\n);
		 }
		 else {
		 
			 for(int k = 1; k <= (7 - i ) + 1; k++) {

				 printf("%d ",num);
				 num--;
			 }
			 //printf("\n");
		 }
		 printf("\n");
	 }
 }

/*
 *
3
3 2
3 2 1
3 2 1 0
3 2 1
3 2
3

*/
