
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int num[n];
	 int x,z = 1;
	 printf("Enter the Element of array : ");

	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&num[i]);
	 }
	 for(int i = 0; i < n/2; i++) {
	 

		 x = num[i];
		 num[i] = num[n-z];
		 num[n-z] = x;
		 z++;
	 }
	 for(int i = 0; i < n; i++) {
	 
		 printf("%d ",num[i]);
	 }
	 printf("\n");

 }

/*
 *
Enter the size of array : 6
Enter the Element of array : 3 61 23 9 87 0
0 87 9 23 61 3

*/
