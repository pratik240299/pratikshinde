
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 5; i++) {
	 
		 int count = 1;

		 for(int j = 1; j <= 5; j++) {
		 
			 if(i > count) {
			 
				 count++;
				 printf("  ");
			 }
			 else {
			 
				 printf("* ");
			 }
		 }
		 printf("\n");
	 }
 }


/*

* * * * *
  * * * *
    * * *
      * *
        *

*/	
