#include<stdio.h>

 void main() {
 
 	int x=10;
	int y=20;

	switch(x) {
	
		case x:                         // error:  here we should write either constant (10) or character'x', we can't write direct x.
			printf("case 10\n");
			printf("x=%d\n",x);
			break;
		case y:                         // error:  here we should write either constant (20) or character'y', we can't write direct y.
			printf("case 20\n");
			printf("y=%d\n",y);
			break;
		default:
			printf("default\n");
			break;
	
	}
 }
