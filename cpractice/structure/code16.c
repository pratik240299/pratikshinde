
#include<stdio.h>

 struct arithmatic {
 
	 int a;
	 int b; 
 
 }arth = {10,20};

 void add(struct arithmatic *ptr) {
 
	printf("Addition = %d\n",ptr->a + (*ptr).b);
 }

 void main() {
 
	 add(&arth);
 }


/*
 * Addition = 30 
 
 */
