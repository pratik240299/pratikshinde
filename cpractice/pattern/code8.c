
#include<stdio.h>

 void main() {

	 char ch = 'A';
 	 int num = 1;
	 int outer = 1;

	 while(outer <= 5) {
	 
		 int inner = 5;

		 while(inner >= outer) {
		 
			 if(inner == 2 || inner == 4)
				 printf("%d  ",num);
			 else
				 printf("%c  ",ch);
			 num++;
			 ch++;

			 inner--;
		 }
		 printf("\n");
		 outer++;
 	}

 }

/*

A  2  C  4  E  
F  7  H  9  
J  11  L  
M  14  
O 

*/
