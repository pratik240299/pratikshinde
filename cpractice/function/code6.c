
#include<stdio.h>

 void factnum(int);

 void main() {
 
	 int val;
	 printf("Enter the number : ");
	 scanf("%d",&val);

	 factnum(val);
 }
 void factnum(int num) {
 
	 int fac = 1;
	 for(int i = 1; i <= num; i++) {
	 
		 fac = fac * i;
	 }
	 printf("%d\n",fac);
 }

/*
 * Enter the number : 5
   120
 */
