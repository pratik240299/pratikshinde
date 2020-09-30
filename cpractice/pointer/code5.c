#include<stdio.h>

void main() {

	const int a = 10;
	printf("%d\n",a);

	int *iptr = &a;
	*iptr = 20;
	printf("%d\n",*iptr);
}
/*
 *
 * 10
   20
   */


 
