
#include<stdio.h>

 void main() {
 
	 int rows,num = 1;
	 printf("Enter the rows : ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 for(int j = 1; j <= i ; j++) {
		 
			 printf("%d ",num);
			 num++;
		 }
		 printf("\n");

	 
	 }
 }

/*
 *
Enter the rows : 4
1
2 3
4 5 6
7 8 9 10


*/
