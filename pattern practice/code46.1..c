
#include<stdio.h>

 void main() {
 
	
	 for(int i = 1; i <= 5; i++) {
	 
		 int x = 1,y = 1,a= 1;
		 for(int k = 4; k >= i; k--) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= i*2-1; j++) {
		 
			 if(a > i) {
			 
				 printf("%c ",64+x);
				 x++;
			 }
			 else {
			 
				 printf("%c ",64+y);
				 y++;
			 }
			 a++;
		 }
		 printf("\n");
	 }
 }
