
#include<stdio.h>

 void main() {
 
	 int num = 0;
	 for(int i =1; i <= 5; i++) {
	  
		 int space = 1;
		 for(int j = 1; j <= 5; j++) {
		 
			 if(i > space) {
			 
				 space++;
				 printf("  ");
			 }
			 else {
			 
				 printf("%d ",j+num);
			 }
		 }
		 num++;
		 printf("\n");

	 }
 }

/*
 
1 2 3 4 5
  3 4 5 6
    5 6 7
      7 8
        9
*/
