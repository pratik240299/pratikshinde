
#include<stdio.h>

 void main() {
 
	 int arr[3][3];
	
	 
	 printf("Enter the element :\n");
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
		 	 scanf("%d",&(arr[i][j]));
		 }
	 }
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
		 	 printf("%d ",arr[i][j]);
		 }
		 printf("\n");
	 }
	
 }

/*
 * Enter the element :
1
2
3
4
5
6
7
8
9
1 2 3
4 5 6
7 8 9

*/
