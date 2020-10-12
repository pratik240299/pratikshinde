
#include<stdio.h>

 void main() {
 
	 int x = 10;

	 void *vptr = &x;

	 printf("%d\n",*(int*)vptr);

 }

/*
 * 10

 */
