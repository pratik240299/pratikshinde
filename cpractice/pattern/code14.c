
#include<stdio.h>

 void main() {
 
	 int num = 1;
	 for(int i =1; i <= 4; i++) {
	 
		 int count = 1;
		 for(int j =1; j <= 4; j++) {
		 
			 if(i > count) {
			 
				 count++;
				 printf("          ");
			 }
			 else {
			 
				 printf("   %d    ",num*num);
				 num++;
			 }
		 }
		 printf("\n");
	 }
 }

/*

1 4 9 16
  25 36 49
    64 81
      100

*/      
