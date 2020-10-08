
#include<stdio.h>

 void main() {
 
	 int r,c;
	 printf("Enter the no of rows : ");
	 scanf("%d",&r);
	 printf("Enter the no of columns : ");
	 scanf("%d",&c);

	 int arr[r][c];
	 printf("Enter the element in array : ");
	 
	 for(int i = 0; i < r; i++) {
	
		for(int j = 0; j < c; j++){ 
		 	
			scanf("%d",&arr[i][j]);
		}
	 }
	 printf("Matrix : \n");
	 for(int i = 0; i < r; i++) {
	
		for(int j = 0; j < c; j++){ 
		 	
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	 }
	 printf("Transpose of Matrix :  \n");
	 for(int i = 0; i < c; i++) {
	
		for(int j = 0; j < r; j++){ 
		 	
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	 }
	

 }

/*
 *
 * Enter the no of rows : 2
Enter the no of columns : 3
Enter the element in array : 1 2 3 4 5 6
Matrix :
1 2 3
4 5 6
Transpose of Matrix :
1 4
2 5
3 6

*/
