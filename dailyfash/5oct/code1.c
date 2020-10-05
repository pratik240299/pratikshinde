
#include<stdio.h>

 void main() {
 
	 int m,n,sum = 0;
	 printf("Enter the no pf rows & column : ");
	 scanf("%d %d",&m,&n);

	 int arr[m][n];

	 printf("Enter the array element : ");
	 for(int i = 0; i < m; i++) {
	 
		 for(int j = 0; j < n; j++) {
		 
			 scanf("%d",&(arr[i][j]));
		 }
	 }
	 printf("Array element: \n");
	 for(int i = 0; i < m; i++) {
	 
		 for(int j = 0; j < n; j++) {
		 
			 printf("%d ",arr[i][j]);
		 }
		 printf("\n");
	 }
	 printf("Main diagonal element is : ");
	 for(int i = 0; i < m; i++) {
	 
		 for(int j = 0; j < n; j++) {
		 
			 if(i == j) {
				 printf("%d ",arr[i][j]);
				 sum = sum + arr[i][j]; 
			 }
		 }
	 }
	 printf("\nmain diagonal element addition is : %d\n",sum);
	 printf("Transpose of matrix  : \n");
	 for(int i = 0; i < n; i++) {
	 
		 for(int j = 0; j < m; j++) {
		 
			 printf("%d ",arr[j][i]);
		 }
		 printf("\n");
	 }
 }

/*
 * Enter the no pf rows & column : 3 3
Enter the array element : 1 2 3 4 5 6 7 8 9
Array element:
1 2 3
4 5 6
7 8 9

Main diagonal element is : 1 5 9
main diagonal element addition is : 15
Transpose of matrix  :
1 4 7
2 5 8
3 6 9

*/
