
#include<stdio.h>

 void main() {
 
	 for(int i = 1; i <= 7; i++) {
	 
		 char ch = 'D';
		 if(i <= 4) {
		 
			 for(int k = 1; k <= i; k++) {
			 
				 printf("%c ",ch);
				 ch--;
			 }	
		 }
		 else {
		 
			 for(int j = 1; j <= 7 - i + 1; j++) {
			 
				 printf("%c ",ch);
				 ch--;
			 }
		 }
		 printf("\n");
	 }
 }

/*
 
D
D C
D C B
D C B A
D C B
D C
D

*/
