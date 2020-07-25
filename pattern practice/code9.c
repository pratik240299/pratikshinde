
#include<stdio.h>
 
 void main() {

	 for(int i =1; i <= 5; i++) {
	 
		 int ch = 'E';
		 for(int j =1; j <= 5; j++) {
		 
			 printf("%c ", ch);
			 ch--;
		 }
		 printf("\n");
	 }
 }


/*
 *
E D C B A
E D C B A
E D C B A
E D C B A
E D C B A

*/
