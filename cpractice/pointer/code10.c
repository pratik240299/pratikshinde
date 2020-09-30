
#include<stdio.h>

 void main() {
 
	 int arr[] = {10,20,30,40,50,60,70};
	 int *iptr1 = &(arr[0]);
	 int *iptr2 = &(arr[6]);
	 int a = iptr2 - iptr1;
	 printf("%d\n",a);
 }

/*
 * 6
 * /
