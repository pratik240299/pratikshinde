
#include<stdio.h>

 void main() {
 
	 int x = 10; 
	 int *iptr = &x;
	 int **pptr = &iptr;

	 printf("%d\n",x);   	//10
	 printf("%d\n",*iptr);	//10
	 printf("%d\n",**pptr);	//10

 }

/*
 * 10
10
10

*/
