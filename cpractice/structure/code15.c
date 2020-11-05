
#include<stdio.h>

 struct arithmatic {
 
	 int a;
	 int b; 
 
 }arth = {10,20};

 void add(struct arithmatic obj) {
 
	printf("Addition = %d\n",obj.a + obj.b);
 }

 void main() {
 
	 add(arth);
 }


/*
 * Addition = 30 
 
 */
