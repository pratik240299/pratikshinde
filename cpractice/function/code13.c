
#include<stdio.h>

 
	 void swap (int *x,int *y);
	 /*
	 void swap(int *a,int *b) {
	 
		 *a = *a + *b;
		 *b = *a - *b;
		 *a = *a - *b;
	 }
	 *
	 * /

	 void main() {
	 
		 int a = 10,b = 5;
		 printf("%d %d\n",a,b);
		 swap(&a,&b);
		 printf("%d %d\n",a,b);
	 }
	 
	 void swap(int *a,int *b) {
	 
		 *a = *a + *b;
		 *b = *a - *b;
		 *a = *a - *b;
	 }
	 
