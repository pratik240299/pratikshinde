
#include<stdio.h>

 void main() {
 
	 int r,c;
	 printf("Enter the no of rows : ");
	 scanf("%d",&r);
	 printf("Enter the no of columns : ");
	 scanf("%d",&c);


	 int arr[r][c];
	 int count = 0;
	 printf("Enter the element in array : ");

	 for(int i = 0; i < r; i++) {
	 
		 for(int j = 0; j < c; j++) {
		 
			 scanf("%d",&arr[i][j]);
		 }
	 }
	 for(int i = 0; i < r; i++) {
	 
		 for(int j = 0; j < c; j++) {
		 
			 if(arr[j][i] == -(arr[i][j]))
				 count++;
		 }
	 }
	 if(count == r*r)
		 printf("matrix is skew Symmetric matrix\n");
	 else
		 printf("matrix is not skew Symmetric matrix\n");
 }

/*
 * Enter the no of rows : 3
Enter the no of columns : 3
Enter the element in array : 0 1 -2 -1 0 3 2 -3 0
matrix is skew Symmetric matrix

Enter the no of rows : 3   
Enter the no of columns : 3
Enter the element in array : 1 2 3 4 5 6 7 8 9
matrix is not skew Symmetric matrix

*/
