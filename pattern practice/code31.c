
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 5; i++) {
	 
		 int count = 1, num = 1;

		 for(int j =1; j <= 5; j++) {
		 
			 if(i > count) {
			 
				 count++;
				 printf("  ");
			 }
			 else {
			 
				 printf("%d ",num);
				 num++;
			 }
		 }
		 printf("\n");
	 }
 }

/*
 
1 2 3 4 5 
  1 2 3 4 
    1 2 3 
      1 2 
        1 
*/
	
