
#include<stdio.h>

 void main() {
 
	 int arr[10];
	 int sum1 = 0,sum2 = 0;
	 printf("Enter the Element in array : ");

	 for(int i = 0; i < 10; i++) {
	 
		 scanf("%d",&arr[i]);
	 }

	 int *iptr = arr;
	 for(int i = 0; i < 10; i++) {
	 
		 if(*(iptr + i) % 2 == 0)
			 sum1 = sum1 + *(iptr+i);
		 else 
			 sum2 = sum2 + *(iptr + i);
	 }
	 printf("Sum of even number = %d\n",sum1);
	 printf("Sum of odd number = %d\n",sum2);
 }

/*
 * Enter the Element in array : 1 2 3 4 5 6 7 8 9 10
   Sum of even number = 30
   Sum of odd number = 26

*/
