
#include<stdio.h>

 void main() {
 
	 int r,c;
	 printf("Enter the no of row : ");
	 scanf("%d",&r);
	 printf("Enter the no of column : ");
	 scanf("%d",&c);

	 int arr1[r][c];
	 int arr2[r][c];
	 int arr3[r][c];
	 printf("Enter the element in array1 : ");
	 for(int i = 0; i < r; i++) {
	 
		 for(int j = 0; j < c; j++) {
		 
			 scanf("%d",&arr1[i][j]);
		 }
	 }
	 printf("Enter the element in array2 : ");
	 for(int i = 0; i < r; i++) {
	 
		 for(int j = 0; j < c; j++) {
		 
			 scanf("%d",&arr2[i][j]);
		 }
	 }
	 printf("third array is : \n");
	 for(int i = 0; i < r; i++) {
	 
		 for(int j = 0; j < c; j++) {
		 
			 *(*(arr3+i)+j) = *(*(arr1+i)+j) + *(*(arr2+i)+j);
			 printf("%d ",*(*(arr3+i)+j));
		 }
		 printf("\n");
	 }
 }

/*
 *
 * Enter the no of row : 3
Enter the no of column : 3
Enter the element in array1 : 1 2 3 4 5 6 7 8 9
Enter the element in array2 : 10 11 12 13 14 15 16 17 18
third array is :
11 13 15
17 19 21
23 25 27


*/
