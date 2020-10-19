
#include<stdio.h>

 void main() {
 
	 int r,c;
	 printf("Enter the size of row : ");
	 scanf("%d",&r);
	 printf("Enter the size of column : ");
	 scanf("%d",&c);

	 double arr[r][c];
	 printf("Enter the element in array : ");

	 for(int i = 0; i < r; i++) {
	 
		 for(int j = 0; j < c; j++) {
		 
			 scanf("%lf",&arr[i][j]);
		 }
	 }
	 double (*dptr)[r][c] = &arr;

	 for(int i = 0; i < 1; i++) {
	 
		 for(int j = 0; j < r; j++) {
		 
			 for(int k = 0; k < c; k++) {
			 
				 printf("%lf ",*(*(*(dptr+i)+j)+k));
			 }
		 	printf("\n");
	 	}
 	}
 }

/*
Enter the size of row : 2
Enter the size of column : 2
Enter the element in array : 1.1 2.2 3.3 4.4
1.100000 2.200000
3.300000 4.400000

*/


