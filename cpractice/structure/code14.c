
#include<stdio.h>

 struct arithmatic {
 
	 int a;
	 int b; 
 
 }arth = {10,20};

 void add(int *x, int *y) {
 
	printf("Addition = %d\n",*x + *y);
 }

 void main() {
 
	 add(&arth.a,&arth.b);
 }


/*
 * Addition = 30 
 
 */
