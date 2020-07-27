
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 3; i++) {
	 
		 for(int j =1; j <= 5; j++) {
		 
			 if(j %2 !=0) {
			 
				 printf("* ");
			 }
			 else {
			 
				 printf("_ ");

			 }
		 }
		 printf("\n");
	 }
 }

/*

* _ * _ *
* _ * _ *
* _ * _ *

*/
