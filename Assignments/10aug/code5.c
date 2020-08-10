
#include<stdio.h>

 void main() {
 
	 int rows,a = 0, b = 1,c;
	 printf("enter the rows: ");
	 scanf("%d",&rows);

	 c = a + b;

	 for(int i = 1; i <= rows; i++ )  {
	 
		 for(int j = 1; j <= i; j++) {
		 
			 printf("%d\t",a);
			 a = b;
			 b = c;
			 c = a + b;
		 }
		 printf("\n");
	 }
 }

/*
 
enter the rows: 4
0
1	1
2	3	5
8       13	21	34

*/
