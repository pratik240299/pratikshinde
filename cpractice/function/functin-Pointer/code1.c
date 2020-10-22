
#include<stdio.h>

 void sub(int x,int y) {
 
	 printf("%d\n",x-y);
 }

 void main() {

	 void (*fptr)(int,int) = sub;

	 //fptr = sub;
	 fptr(30,20);
 }

// 10
