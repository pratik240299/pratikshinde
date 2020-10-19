
#include<stdio.h>

 void main() {

	 int arr[10];
	 int count = 0,num;

	 printf("Enter the number : ");
	 scanf("%d",&num);

	 for(int i = 0; i < 10; i++) {
	 
		 count++;
		 arr[i] = num * count;
	 }

	 int (*iptr)[10] = &arr;

	 for(int i = 0; i < 1; i++) {
	 
		 for(int j = 0; j < 10; j++) {
		 	
			 printf("%d ",*(*(iptr + i)+j));
		 }
	 }
	 printf("\n");
 }

/*
 * Enter the number : 2
   2 4 6 8 10 12 14 16 18 20

   */
