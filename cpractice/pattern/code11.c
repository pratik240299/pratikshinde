
#include<stdio.h>

 void main() {
 
	for(int row =1; row <= 4; row++) {
	
		for(int space = 3; space >= row; space--) {
		
			printf("  ");
		}
		for(int col = 1; col <= row; col++) {
		
			printf("%d ",col);
		}
		printf("\n");
	}
	
 }

/*
 
      1 
    1 2 
  1 2 3 
1 2 3 4 

*/
