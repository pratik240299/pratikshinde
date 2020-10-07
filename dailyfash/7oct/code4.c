
#include<stdio.h>

 void main() {
 
	 int r,c;
	 printf("Enter the no of rows :");
	 scanf("%d",&r);
	 printf("Enter the no of columns :");
	 scanf("%d",&c);

	 int arr1[r][c];
	 int arr2[r][c];

	 printf("Enter the element in array1 :");
	 for(int i = 0; i < r; i++) {
	 
		 for(int j = 0; j < c; j++) {
		 
			 scanf("%d",&arr1[i][j]);
		 }
	}
	printf("Enter the element in array2 :");
	for(int i = 0; i < r; i++) {
	 
		for(int j = 0; j < c; j++) {
		 
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("Matrix1 :\n");
	for(int i = 0; i < r; i++) {
	 
		for(int j = 0; j < c; j++) {
		 
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("Matrix2 :\n");
	for(int i = 0; i < r; i++) {
	 
		for(int j = 0; j < c; j++) {
		 
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	printf("output :\n");
	for(int i = 0; i < r; i++) {
	 
		for(int j = 0; j < c; j++) {
		
		        int sum = 0;	
			for(int k = 0; k < r; k++) {
			
				sum = sum + (arr1[i][k] * arr2[k][j]);
			}
			printf("%d ",sum);
		}
		printf("\n");
	}

 }

/*
 *
Enter the no of rows :3
Enter the no of columns :3
Enter the element in array1 :1 2 3 4 5 6 7 8 9
Enter the element in array2 :1 2 3 4 5 6 7 8 9
Matrix1 :
1 2 3
4 5 6
7 8 9
Matrix2 :
1 2 3
4 5 6
7 8 9
output :
30 36 42
66 81 96
102 126 150

*/
