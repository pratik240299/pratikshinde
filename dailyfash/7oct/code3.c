
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
	 
		 for(int j = 0; j < c; j++) {
		 
			 scanf("%d",&arr[i][j]);
		 }
	 }
	 for(int i = 0; i < r; i++) {
	 
		 for(int j = 0; j < c; j++) {
		 
			 printf("%d ",*(*(arr+i)+j));
		 }
		 printf("\n");
	 }

	 printf("the address of element by using formula is : ");
	 for(int i = 0; i < r; i++) {
	 
	 	for(int j = 0; j < c; j++) {
		
			printf("%p\n",(*(arr+i)+j));
		}

	 }
	 
 }

/*
 *
 * Enter the no of rows : 2
Enter the no of columns : 3
Enter the element in array : 1 2 3 4 5 6
1 2 3
4 5 6
the address of element by using formula is : 0x7ffe2a163450
0x7ffe2a163454
0x7ffe2a163458
0x7ffe2a16345c
0x7ffe2a163460
0x7ffe2a163464

*/
