
#include<stdio.h>

 void main() {
 
	 int num = 1;
	 int diff = 0;
	 for(int i =1; i <= 4; i++) {
	 
		 num = 1 + diff*diff;
		 for(int j =1; j <= 4; j++) {
		 
			 if(i + j <= 4) {
			 
				 printf(" \t");
			 }
			 else{
			 
				 printf("%d\t",num);
				 num++;
			 }

		 }
		 diff++;
		 printf("\n");
		 
	 }
 }

/*
 * 	 	 	1
 	 	2	3
 	5	6	7
10	11	12	13

*/
