
#include<stdio.h>

 void fun(int*,int *);
 void main() {
 
	 int a = 10;
	 int b = 2;
	 int arr[5] = {30,40,50,60,70};

	 int *pa = &a;
	 int *pb = &b;
	 int *ptr = arr;

	 fun(arr,ptr);
	 printf("VALUE : %d\n",*pa/(*(pb)));
 }
 void fun(int *arr,int *ptr) {
 
 ++*ptr;						// ++30 == 31
 printf("Adress %p\t value: %d\n",ptr,*ptr);

 *ptr++; 						// *(ptr+(1*4)) = 40; 
 printf("Adress %p\t value: %d\n",ptr,*ptr);
 
 }
