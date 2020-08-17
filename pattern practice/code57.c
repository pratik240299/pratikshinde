
#include<stdio.h>

 void main() {
 
	 int num1 = 4,num2 = 2;
	 for(int i = 1; i <= 7; i++) {

	       	 int ch ;
		 if(i <= 4) {

			 ch  =  64 + num1;
			 for(int k = 1; k <= i; k++) {
			 
				 printf("%c ",ch);
				 ch++;
			 }
			 num1--;
			 printf("\n");
		 }
		 else {
			 ch = 64 + num2; 
		 
			 for(int j = 1; j <= 7 - i + 1; j++) {
			 
				 printf("%c ",ch);
				 ch++;
			 }
			 num2++;
			 printf("\n");
		 }
	 }
 }

/*

D
C D
B C D
A B C D
B C D
C D
D

*/
