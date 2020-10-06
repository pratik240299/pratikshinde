
#include<stdio.h>

 void main() {
 
	 int row,col;
	 float sum = 0;
	 printf("Enter the size of row : ");
	 scanf("%d",&row);
	 printf("Enter the size of column : ");
	 scanf("%d",&col);
	// float rows = row, cols = col;

	 float arr[row][col];
	 printf("Enter the element in array : ");
	 
	 for(int i = 0; i < row; i++) {
	 
		 for(int j = 0; j < col; j++) {
		 
			 scanf("%f",&arr[i][j]);
		 }
	 }
	 for(int i = 0; i < row; i++) {
	 
		 for(int j = 0; j < col; j++) {
		 
			 printf("%0.0f ",arr[i][j]);
		 }
		 printf("\n");
	 }
	 for(int i = 0; i < row; i++) {
	 
		 sum = 0;
		 for(int j = 0; j < col; j++) {
		 
			 sum = sum + arr[i][j];
		 }
		 printf("Average of row %d : %0.2f\n",i,(sum/col));
	 }
	 for(int i = 0; i < col; i++) {
	 
		 sum = 0;
		 for(int j = 0; j < row; j++) {
		 
			 sum = sum + arr[j][i];
		 }
		 printf("Average of column %d : %0.2f\n",i,(sum/row));
	 }


 }

/*
 *
 * Enter the size of row : 3
Enter the size of column : 4
Enter the element in array : 1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4
5 6 7 8
9 10 11 12
Average of row 0 : 2.50
Average of row 1 : 6.50
Average of row 2 : 10.50
Average of column 0 : 5.00
Average of column 1 : 6.00
Average of column 2 : 7.00
Average of column 3 : 8.00


*/
