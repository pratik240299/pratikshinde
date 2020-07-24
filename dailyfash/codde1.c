
#include<stdio.h>

 void main() {
 
	 for(int i = 1; i <= 5; i++) {
	 
		 int num = 64+i;

		 for(int j = 1; j <= 5; j++) {
		 
			 if( i+j <= 5) {
				 printf("  ");
			 }
			 else{
			 
				 printf("%c ",num);
				 num++;
			 }
			 

		 }
		 printf("\n");

	 }
 }
