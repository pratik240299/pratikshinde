
#include<stdio.h>

 int a = 0,b = 1,c;
 void fibonacci(int x) {
 
	 for(int i = 0; i < x; i++) {
	 
		 printf("%d ",a);
		 c = a + b;
		 a = b;
	         b = c;	 
	 }
 }

 void main() {
 
	 int num;
	 printf("Enter the number upto : ");
	 scanf("%d",&num);
	 
	 fibonacci(num);

	 printf("\n");
 }

/*
 * Enter the number upto : 10
   0 1 1 2 3 5 8 13 21 34

   */
