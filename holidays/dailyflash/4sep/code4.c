
#include<stdio.h>

 void main() {
 
	 int rows,num = 0;
	 printf("Enter the number of rows : ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 num = rows - i;
		 for(int j = 1; j <= i; j++) {
		 
			 printf("%d ",num);
			 num++;
		 }
		 printf("\n");
	 }
 }

/*
 *
Enter the number of rows : 4
3
2 3
1 2 3
0 1 2 3

*/
