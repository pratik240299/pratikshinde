
#include<stdio.h>

 void main() {
 
	 int rows,num = 1;;
	 printf("Enter the rows : ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 for(int j = 1; j <= i; j++) {
		 
			 printf("%d\t",num*num);
			 num++;
		 }
		 printf("\n");
	 }
 }

/*
 *
 * Enter the rows : 4
1
4	9
16	25	36
49	64	81	100

*/
