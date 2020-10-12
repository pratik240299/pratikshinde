
#include<stdio.h>

 void main() {
 
	 int x = 10;
	 int *iptr = &x;
	 int **pptr = &iptr;

	 printf("%d\n",x);
	 printf("%d\n",*iptr);
	 printf("%p\n",&iptr);
	 printf("%p\n",*pptr);
 }
