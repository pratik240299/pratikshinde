
#include<stdio.h>

 void main() {
 
	 for(int i =1; i <= 5; i++) {
	 
		 int count = 1;
		 for(int j =1; j<= 5; j++) {
		 
			 if(i > count) {
			 
				 count++;
				 printf(" \t");
			 }
			 else {
			 
				 printf("%d\t",i*j);		 
			 }
		 }
		 printf("\n");
	 }
 }

/*
 
1	2	3	4	5	
 	4	6	8	10	
 	 	9	12	15	
 	 	 	16	20	
 	 	 	 	25	


*/
