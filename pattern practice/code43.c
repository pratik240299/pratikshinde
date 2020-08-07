
#include<stdio.h>

 void main() {
 
	 
	 for(int i =1; i <= 4; i++) {
	 
		 int x = 1;
		 int a = 1;
		 for(int k = 3; k >= i; k--) {
		 
			 printf("  ");

		 }
		 for(int j = 1; j <= i*2-1; j++) {
		
			
			 if(a >= i) {
			
				 printf("%d ",x);	 
				 x--;
			 }
			 else {
			 
				 printf("%d ",x);
				 x++;
			 }
			 a++;
		 }
		
		 printf("\n");
	 }
 }
