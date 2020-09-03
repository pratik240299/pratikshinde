
#include<stdio.h>

 void main() {
 
	 int rows,num = 1;;
	 printf("Enter the rows : ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 for(int j = 1; j <= i ; j++) {
		 
			 printf("%d ",num*num*num);
			 num++;
		 }
		 printf("\n");
	 }
 }

/*
 *
Enter the rows : 4
1
8 27
64 125 216
343 512 729 1000

*/
