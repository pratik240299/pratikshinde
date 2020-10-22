
#include<stdio.h>

 void add(int,int);
 void sub(int,int);
 void funcallfun(int,int,void (*)(int,int));
 
 void main() {
 
	 int a = 10, b = 20;

	 funcallfun(a,b,add);
 
 }
 void funcallfun(int x,int y,void (*fptr)(int,int)) {
 
	 fptr(x,y);
 }
 void add(int x,int y) {
 
	 printf("%d\n",x+y);
 }
 void sub(int x,int y) {
 
	 printf("%d\n",x-y);
 }

// 30
