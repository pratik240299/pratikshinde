
#include<stdio.h>

 void main() {
 
	 int rows,num = 1;;
	 printf("Enter the number of rows: ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 for(int j = 1; j <= rows; j++) {
		 
			 printf("%d\t",num);
			 num++;
		 }
		 printf("\n");
	 }
 }

/**
 *
Enter the number of rows: 4
1	2	3	4
5	6	7	8
9	10	11	12
13	14	15	16

*/
