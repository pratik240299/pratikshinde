
#include<stdio.h>

 void factnum(int x);

 void main() {
 
	 int val;
	 printf("Enter the number : ");
	 scanf("%d",&val);

	 factnum(val);
 }
 void factnum(int num) {
 
	 int fac = 1;
	 for(int i = 0; i <= num; i++) {
	 
		 fac = fac * i;
	 }
	 printf("%d\n",fac);
 }
