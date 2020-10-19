
#include<stdio.h>
 
 void odd_num(int (*iptr)[3]) {
	 
	 printf("Odd Number : ");
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
			 if(*(*(iptr+i)+j) % 2 != 0)
				 printf("%d ",*(*(iptr+i)+j));
		 }
	 }
	 printf("\n");
 }


 void main() {
 
	 int r = 3, c= 3;

	 int arr[3][3];

	 printf("Enter the element in array : ");
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
			 scanf("%d",&arr[i][j]);
		 }
	 }
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
			 printf("%d ",arr[i][j]);
		 }
		 printf("\n");
	 }
	 odd_num(arr);
 }

/*

Enter the element in array : 1 2 3 4 5 6 7 8 9
1 2 3
4 5 6
7 8 9
Odd Number : 1 3 5 7 9

*/
