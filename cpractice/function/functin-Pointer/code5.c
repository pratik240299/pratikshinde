
#include<stdio.h>

 void add(int,int);
 void sub(int,int);

 void main() {
 
	 void (*fptr)(int,int) = 0;

	 fptr = &add;
	 fptr(10,20);
	 fptr = &sub;
	 fptr(20,10);
 }

 void add(int a,int b) {
 
	 printf("%d\n",a+b);
 }
 void sub(int a,int b) {
 
	 printf("%d\n",a-b);
 }

//30
//10
