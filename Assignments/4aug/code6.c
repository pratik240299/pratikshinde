
#include<stdio.h>

 void main() {
 
	for(int i = 1; i <= 3; i++) {
	
		for(int x = 1; x <= 2; x++) {
		

		for(int k = 2; k >= i;k--) {
		
			printf("  ");
	        }

		for(int j =1; j <= i*2-1; j++) {
		
			printf("* ");
		}
		printf("\n");

		}
	
	}
 }


