
#include<stdio.h>

 void main() {
 
	 int arr[4][4];
	 int max = 0;

	 printf("Enter the element in array : ");
	 for(int i = 0; i < 4; i++) {
	 
		 for(int j = 0; j < 4; j++) {
		 
			 scanf("%d",&arr[i][j]);
		 }
	 }
	 printf("Output : \n");
	 for(int i = 0; i < 4; i++) {
	 
		 for(int j = 0; j < 4; j++) {
		 
			 printf("%d ",arr[i][j]);
			 
			 if(arr[i][j] > max)
				 max = arr[i][j];
		 }
		 printf("\n");
	 }
	/* printf("Output : \n");
	 for(int i = 0; i < 4; i++) {
	 
		 for(int j = 0; j < 4; j++) {
		 
			 if(arr[i][j] > max)
				 max = arr[i][j];
		 }
		 printf("\n");
	 }*/

	 printf("Biggest number in the array is %d\n",max);
	 

 }


/*
 * Enter the element in array : 10 11 12 13 14 36 16 17 18 19 20 21 22 23 24 25
Output :
10 11 12 13
14 36 16 17
18 19 20 21
22 23 24 25
Biggest number in the array is 36

*/
