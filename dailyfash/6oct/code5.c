
#include<stdio.h>

 void main() {
 
	 int m,n;
	 printf("Enter the number of rows & column : ");
	 scanf("%d %d",&m,&n);

	 int arr1[m][n];
	 int arr2[m][n];

	 printf("Enter the element in array1 : ");

	 for(int i = 0; i < m; i++) {
	 
		 for(int j = 0; j < n; j++) {
		 
			 scanf("%d",&arr1[i][j]);
		 }
	 }
	 printf("output : \n");
	 for(int i = 0; i < m; i++) {
	 
		 for(int j = 0; j < n; j++) {
		 
			if(arr1[i][j] % 2 == 0) {
			
				arr2[i][j] = arr1[i][j] * arr1[i][j];
				printf("%d\t",arr2[i][j]);
			}
			else if (arr1[i][j] % 2 != 0){
			
				arr2[i][j] = arr1[i][j] * arr1[i][j] * arr1[i][j];
				printf("%d\t",arr2[i][j]);

			}
		 }
		 printf("\n");
	 }
	 
 }

/*
 *
 * Enter the number of rows & column : 3 3
Enter the element in array1 : 1 2 3 4 5 6 3 2 1
output :
1	4	27
16	125	36
27	4	1


*/
