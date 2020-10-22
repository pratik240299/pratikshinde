
#include<stdio.h>

 int sum = 0,num = 5;

 int passarr(int *iptr,int x) {
 
	 for(int i = 0; i < num; i++) {
	 	
		 sum = sum + *(iptr+i);
	 }
	 return sum;
 }
 void main() {
 
	 int arr[] = {10,20,30,40,50};

	 sum = passarr(arr,num);

	 printf("%d\n",sum);
 }
 
//150

