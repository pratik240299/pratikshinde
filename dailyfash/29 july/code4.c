
#include<stdio.h>

 void main() {
 
	 int num = 1;
	 for(int i = 1; i <= 5; i++) {
	 
		 int space = 1;

		 for(int j = 1; j <= 5; j++) {
		 
			 if(i > space) {
			 
				 space++;
				 printf(" \t");
			 }
			 else {
			 
				 if(i % 2 == 0) {
				 
					 printf("%d\t",num*num*num);
					 num++;
				 }
				 else {
				 
					 printf("%d\t",num*num);
					 num++;
				 }
				 
			 }
		 }
		 printf("\n");
	 }
 }

/*
 *
 * 1	4	9	16	25
 	216	343	512	729
 	 	100	121	144
 	 	 	2197	2744
 	 	 	 	225

*/
