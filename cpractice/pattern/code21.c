
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 4; i++) {
	 
		 int num = 1;
		 for(int k =3; k >= i; k--) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= i*2-1; j++) {
		 
			 printf("%d ",num);
			 num++;
		 }
		 printf("\n");
	 }

 }

/*
 *
      1
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7

*/
