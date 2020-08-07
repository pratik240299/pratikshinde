

#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 4; i++) {
	 
		 int x = 4;
		 int count = 1;
		 for(int j =1; j<= 4; j++) {
		
			 if(i > count) {
			 
				 count++;
				 printf(" ");
			 }
			 else {
			 
				 printf("%d ",x);
				 x--;
			 
			 }
		 }
		 printf("\n");
	 }

 }

/*
 *
4 3 2 1
 4 3 2
  4 3
   4
*/
