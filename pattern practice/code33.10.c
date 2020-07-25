
#include<stdio.h>
 
 void main() {
 
	 for(int i =1; i <=5; i++) {
	 
		 for(int j = 1; j <= 5; j++) {
		 
			 if(i + j <= 5) {
			 
				 printf("  ");
			 }
			 else {
			 
				 printf("%d ",j*j);
			 }
		 }
		 printf("\n");
	 }
 }

/*
 
         25
      16 25
    9 16 25
  4 9 16 25
1 4 9 16 25

*/
