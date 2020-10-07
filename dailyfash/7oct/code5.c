
#include<stdio.h>

 void main() {
 
	 int p,r,c;
	 printf("Enter the no of plane : ");
	 scanf("%d",&p);
	 printf("Enter the no of rows : ");
	 scanf("%d",&r);
	 printf("Enter the no of columns : ");
	 scanf("%d",&c);

	 int arr[p][r][c];

	 printf("Enter the element in array : ");
	 for(int i = 0; i < p; i++) {
	 
		 for(int j = 0; j < r; j++) {
		 
			 for(int k = 0; k < c; k++) {
			 
				 scanf("%d",&arr[i][j][k]);
			 }
		 }
	 }
	 printf("3D array by seprating plane : \n");
	 for(int i = 0; i < p; i++) {
	 
		 for(int j = 0; j < r; j++) {
		 
			 for(int k = 0; k < c; k++) {
			 
				 printf("%d ",*(*(*(arr+i)+j)+k));
			 }
			 printf("\n");
		 }
		 printf("\n");
	 }
	 

 }

/*
 * Enter the no of plane : 2
Enter the no of rows : 3
Enter the no of columns : 3
Enter the element in array : 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9
3D array by seprating plane :
1 2 3
4 5 6
7 8 9

1 2 3
4 5 6
7 8 9


*/
