
#include<stdio.h>

 int sum = 0;
 void elepass(int arr[][3]) {
 
	 for(int i = 0; i < 3; i++) {
	 
		 for(int j = 0; j < 3; j++) {

		 	sum = sum + arr[i][j];
		 }
	 }
 }
 
 void main() {
 
	 int arr[][3] = {10,20,30,40,50,60,70,80,90};
	 
	 elepass(arr);

	 printf("%d\n",sum);
 }

// 450

