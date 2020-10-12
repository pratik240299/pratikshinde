
#include<stdio.h>

 void main() {
 
	 int x = 10;

	 int *iptr = &x;
	 void *vptr = &x;
	 
	 printf("%p\n",vptr); 
	 printf("%p\n",iptr); 
	 printf("%d\n",*vptr); 		// Error
	 printf("%d\n",*iptr); 
	 printf("%p\n",&x); 
 }
