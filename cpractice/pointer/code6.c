
#include<stdio.h>

 void main() {
 
	 int a = 10;
	 int b = 20;
	 int *iptr = &a;
	 int *ansptr = NULL;
	 ansptr = iptr + 1;
	 printf("%d\n",*ansptr);
 }

/*
 * 20
*/
