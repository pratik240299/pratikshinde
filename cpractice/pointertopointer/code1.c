
#include<stdio.h>

 void main() {
 
	 int x = 10;
	 int *iptr = &x;
	 int **pptr = &iptr;

	 printf("%p\n",iptr);
	 printf("%p\n",pptr);

	 printf("%ld\n",sizeof(iptr));
	 printf("%ld\n",sizeof(pptr));

	 
 }
