
#include<stdio.h>

 int factnum(int);

 void main() {
 
	 int val;
	 printf("Enter the number : ");
	 scanf("%d",&val);

	 int i = factnum(val);
	 printf("%d\n",i);
 }
 int factnum(int num) {
 
	 int fac = 1;
	 for(int i = 1; i <= num; i++) {
	 
		 fac = fac * i;
	 }
	 //printf("%d\n",fac);
	 return fac;
 }

/*
 * Enter the number : 5
   120
 */
