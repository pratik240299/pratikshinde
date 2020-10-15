
#include<stdio.h>
 
	 void add_sub(int a, int b, int *add,int *sub) {
	 
		 *add = a + b;
		 *sub = a - b;
	 }

	 void main() {
	 
		 int a = 10, b = 20,add,sub;
		 printf("%d %d\n",a,b); 	// 10 20
		 add_sub(a,b,&add,&sub);
		 printf("%d %d\n",add,sub);
	 }

/*
 * 10 20
   30 -10

 */



