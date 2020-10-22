
#include<stdio.h>

 int sum = 0,num = 5;

 int passarr(int arr[],int x) {
 
	 for(int i = 0; i < num; i++) {
	 	
		 sum = sum + arr[i];
	 }
	 return sum;
 }
 void main() {
 
	 int arr[] = {10,20,30,40,50};

	 sum = passarr(arr,num);

	 printf("%d\n",sum);
 }
 
//150

