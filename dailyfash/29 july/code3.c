
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enetr the no of rows: ");
	 scanf("%d",&n);

	 for(int i =1; i <= n; i++) {
	 
		 int space = 1; 
		 int mult = 1,num = 1;

		 for(int j =1; j <= 5; j++) {
		 
			 if(i > space) {
			 
				 space++;
				 printf(" \t");
			 }
			 else {
			 
				 mult = mult * num;
				 num++;
				 printf("%d\t",mult);
			 }
		 }
		 printf("\n");
	 }
 }

/*
 
Enetr the no of rows: 5
1	2	6	24	120	
 	1	2	6	24	
 	 	1	2	6	
 	 	 	1	2	
 	 	 	 	1	
*/
