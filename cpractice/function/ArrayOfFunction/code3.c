
#include<stdio.h>

 int elepass(int x);
 int sum = 0;
 void main() {
 
	 
	 int arr[] = {10,20,30,40,50};

	 int ret = 0;
	 for(int i = 0; i < 5; i++) {
	 
		 ret = elepass(arr[i]);
	 }
	 printf("%d\n",ret);
 }
 int elepass(int y) {
 
	 sum = sum + y;
	 return sum;
 }

/// 150

