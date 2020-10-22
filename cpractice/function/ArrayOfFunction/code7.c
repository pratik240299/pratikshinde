
#include<stdio.h>

 int sum = 0;

 int passarr(int (*iptr)[3]) {
 
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
			 sum = sum + *(*iptr + i)+j;
		 }
	 }
	 return sum;
 }
 void main() {
 
	 int arr[][3] = {1,2,3,4,5,6,7,8,9};

	 sum = passarr(arr);
	 printf("%d\n",sum);		// 45
 }

// 45
