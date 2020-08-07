

#include<stdio.h>

 void main() {

	 int rows;
	 printf("rows: ");
	 scanf("%d",&rows); 
	 int x = 2;
	 for(int i = 1; i <= rows; i++) {
	 
		 int a = 1;
		 for(int k = rows-1; k >= i ; k--) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <=i*2-1; j++) {
		 
			 if(a >= i) {
			 
				 printf("%d ",x);
				 x++;
			 }
			 else {
			 
				 printf("%d ",x);
				 x--;
			 }
			 a++;
		 }
		 printf("\n");
	 }
 }
