
#include<stdio.h>

 void main() {
 
	 int rows;
	 printf("Enter the number of rows: ");
	 scanf("%d",&rows);

	 int x = rows;
	 for(int i = 1; i <= rows; i++) {
	 
		 int ch = 64 + i*2-1;
		 for(int  k = 1; k < i; k++) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= x*2-1; j++) {
		 
			 if(i % 2 == 0)
				 printf("= ");
			 else {
			 
				 printf("%c ",ch);
				 ch++;
			 }
		 }
		 x--;
		 printf("\n");
	 }
 }

/*
Enter the number of rows: 5
A B C D E F G H I
  = = = = = = =
    E F G H I
      = = =
        I

*/	
