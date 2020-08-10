
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 5; i ++) {
	 
		 for(int k = 4; k >= i ; k--) {
		 
			 printf("  ");
		 
		 }
		 int a = 1;
		 int num = 1; 
		 for(int j =1; j <= i*2-1; j++) {
		 
			 if(a < i) {
			 
				 printf("%d ",num);
				 num++;
			 }
			 else {
			 
				 printf("%d ",num);
				 num--;
			 }
			 a++;
			 
		 }
		 printf("\n");
	 }
 }

/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/


