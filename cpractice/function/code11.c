
#include<stdio.h>

 void swap(int a, int b) {
 
	// Call by value 
	 
	 a = a + b;
	 b = a - b;
	 a = a - b;

	 printf("%d %d\n",a,b);		// 20 10
 }

 void main() {
 
	 int a = 10, b = 20;
	 printf("%d %d\n",a,b);		// 10 20
	 swap(a,b);
	 printf("%d %d\n",a,b);		// 10 20
 }

/*
 * 10 20
 * 20 10
 * 10 20
 *
 * 
*/
