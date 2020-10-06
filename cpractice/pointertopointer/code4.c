
#include<stdio.h>

 void main() {
 
	 int x = 10; 
	 int *iptr = &x;
	 int **pptr = &iptr;

	 printf("%d\n",x);   	//10
	 printf("%d\n",*iptr);	//10
	 printf("%p\n",iptr);	//100
	 printf("%p\n",*pptr);	//100
 }

/*
 10
10
0x7fff5ae54b84
0x7fff5ae54b84

*/
