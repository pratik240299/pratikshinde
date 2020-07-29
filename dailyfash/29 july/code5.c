
#include<stdio.h>

 void main() {
 
	 int a = 0, b = 1, c;

	 
	 for(int i = 1; i <+ 5; i++) {
	 
		 int space = 1;
		 for(int j = 1; j <= 5; j++) {
		 
			 if(i > space) {
			 
				 space++;
				 printf(" \t");
			 }
			 else {
			 
				 printf("%d\t",a);
				 c = a + b;
				 a = b;
				 b = c;
			 }
		 }
		 printf("\n");
	 }
 }

/*
  0	1	1	2	3
 	5	8	13	21
 	 	34	55	89
 	 	 	144	233
*/
