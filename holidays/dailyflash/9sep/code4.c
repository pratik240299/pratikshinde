
#include<stdio.h>

 void main() {
 
	 int rows;
	 printf("Enter the rows : ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 for(int j = rows; j >= i; j--) {
		 
			 if(j % 2 == 0)
				 printf("+ ");
			 else
				 printf("= ");
		 }
		 printf("\n");
	 }
 }

/*
 *
Enter the rows : 4
+ = + =
+ = +
+ =
+

*/
