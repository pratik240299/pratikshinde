
#include<stdio.h>

 void main() {
 
	for(int i =5; i >= 1; i--) {
	
		int count = 5;

		for(int j = 1; j <= 5; j++) {
		
			if(i < count) {
			
				count--;
				printf(" i ");
			}
			else {
			
				printf("%d ",i);
			}
		}
		printf("\n");
	} 
 }

/*

5 5 5 5 5
  4 4 4 4
    3 3 3
      2 2
        1

*/	
