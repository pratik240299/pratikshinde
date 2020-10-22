
#include<stdio.h>

 float sum = 0,avg;
 float avg_num(int num, int x) {

	sum = sum + num;
	avg = sum / x;
	return avg;

 }
 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int arr[n];
	 printf("Ente the element in array : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr[i]);
	 }
	 float (*fptr)(int, int) = avg_num;
	 
	 for(int i = 0; i < n; i++) {
	 
		 float y = fptr(arr[i],n);
	 }
	 printf("Avg = %f\n",y);
	 

 }
