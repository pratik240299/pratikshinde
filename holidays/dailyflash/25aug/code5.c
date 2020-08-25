
#include<stdio.h>

 void main() {
 
	 int rows,num1 = 0,num2 = 1;
	 printf("Enter the rows : ");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++) {
	 
		 for(int j = 1; j <= rows; j++) {
		 
			 if(i % 2 == 0)
				 printf("%d ",num2);
			 else
				 printf("%d ",num1);
		 }
		 printf("\n");
	 }
 }

/*
 *
Enter the rows : 4
0 0 0 0
1 1 1 1
0 0 0 0
1 1 1 1

*/
