
#include<stdio.h>

 int x,y;
 int add(int,int);
 int sub(int,int);

 void main() {
 
	 int (*fptr)(int,int) = 0;

	 fptr = add;
	 int x = fptr(10,20);
	 printf("%d\n",x);
	 fptr = sub;
	 int y = fptr(20,10);
	 printf("%d\n",y);
 }

 int add(int a,int b) {
 
	 x = a + b;
	 return x;
	 
 }
 int sub(int a,int b) {
 
	 y = a - b;
	 return y; 
 }
