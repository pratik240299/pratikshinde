
#include<stdio.h>

 void elepass(int *x);
 int sum = 0;
 void main() {
 
	 
	 int arr[] = {10,20,30,40,50};

	 for(int i = 0; i < 5; i++) {
	 
		 elepass(&arr[i]);
	 }
	 printf("%d\n",sum);
 }
 void elepass(int *y) {
 
	 sum = sum + *y;
 }

/// 150

