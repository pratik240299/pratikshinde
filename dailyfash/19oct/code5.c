
#include<stdio.h>

 void main() {
 
	 int r,c;
	 printf("Enter the size of rows :");
	 scanf("%d",&r);
	 printf("Enter the size of columns :");
	 scanf("%d",&c);

	 int arr[r][c];

	 printf("Enter the element in array : ");
	 for(int i = 0; i < r; i++) {
	 
		 for(int j = 0; j < c; j++) {
		 
			 scanf("%d",&arr[i][j]);
		 }
	 }
	 printf("Output : \n");
	 for(int i = 0; i < r; i++) {
	 
		 for(int j = 0; j < c; j++) {
		 
			 printf("%d ",arr[i][j]);
		 }
		 printf("\n");
	 }
	 printf("After replacing : \n");
	 for(int i = 0; i < r; i++) {
	 
		 for(int j = 0; j < c; j++) {
		 
			 if(arr[i][j] % 2 == 0) {
			 
				 arr[i][j] = 0;
				 printf("%d ",arr[i][j]);
			 }
			 else 
				 printf("%d ",arr[i][j]);
		 }
		 printf("\n");
	 }
 }

/*
 * Enter the size of rows :3
Enter the size of columns :3
Enter the element in array : 1 2 3 4 5 6 7 8 9
Output :
1 2 3
4 5 6
7 8 9
After replacing :
1 0 3
0 5 0
7 0 9

*/
