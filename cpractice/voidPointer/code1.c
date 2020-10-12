
#include<stdio.h>

 void main() {
 
	 int x = 10;

	 int *iptr = &x;
	 void *vptr = &x;
	 
	 printf("%p\n",vptr); 
	 printf("%p\n",iptr); 
	 printf("%p\n",&x); 
 }

/*
 * 0x7ffddd3e2d14
0x7ffddd3e2d14
0x7ffddd3e2d14

*/
