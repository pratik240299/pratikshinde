
#include<stdio.h>

 int a,b,r=0,c=0,sum = 0;
 a = r;
 b = c;
 int diag_num(int arr[a][b],int x,int y) {
 
	 int *iptr = arr;
	 for(int i = 0; i < r; i++) {
	 
		 for(int j = 0; j < c; j++) {
		 
			 if(i == j) {
			 
				 int fac = 1;
				 for(int k = 1; k < *(*(iptr+i)+j); k++) {
				 
					 fac = fac * k;
				 }
				 sum = sum + fac;
			 }
				 

		 }
	 }
	 return sum;


 }

 void main() {
 
	 printf("Enter the no of rows : ");
	 scanf("%d",&r);
	 printf("Enter the no of columns : ");
	 scanf("%d",&c);


	 int arr[r][c];
	 printf("Enter the element in array : ");

	 for(int i = 0; i <= n; i++) {
	 
		 scanf("%d",&arr[i]);
	 
	 }
	 int sum = diag_num(arr,r,c);
	 printf("Sum = %d\n",sum);
 }
