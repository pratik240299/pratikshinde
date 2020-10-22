
#include<stdio.h>

 int sum = 0;
 void elepass(int *iptr) {
 
	 for(int i = 0; i < 5; i++) {
	 
		 sum = sum + *(iptr+i);
	 }
 }
 
 void main() {
 
	 int arr[] = {10,20,30,40,50};
	 
	 elepass(arr);

	 printf("%d\n",sum);
 }

