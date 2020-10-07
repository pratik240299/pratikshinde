
#include<stdio.h>

 void main() {
 
	 int r,c;
	 printf("Enter the no of row : ");
	 scanf("%d",&r);
	 printf("Enter the no of column : ");
	 scanf("%d",&c);

	 int arr[r][c];
	 printf("Enter the element in array : ");

	 for(int i = 0; i < r; i++) {
	 
		 for(int j = 0; j < c; j++) {
		 
			 scanf("%d",&arr[i][j]);
		 }
	 }
	 for(int i = 0; i < r; i++) {
	 
		 int sum = 0;
		 for(int j = 0; j < c; j++) {
		 
			 printf("%d ",*(*(arr+i)+j));
			 sum = sum + *(*(arr+i)+j);
		 }
		 printf("addition is %d",sum);
		 printf("\n");
	 }
 }

/*
 * Enter the no of row : 3
Enter the no of column : 3
Enter the element in array : 1 2 3 4 5 6 7 8 9
1 2 3 addition is 6
4 5 6 addition is 15
7 8 9 addition is 24

*/

