
#include<stdio.h>

 void main() {
 
	 int a = 10;
	 char b = 'B';
	 float c = 20.5;
	 double d = 37.8;

	 int *iptr1 = &a;
	 char *iptr2 = &b;
	 float *iptr3 = &c;
	 double *iptr4 = &d;

	 printf("Address of variable : \n");
	 printf("%p\n",&a);
	 printf("%p\n",&b);
	 printf("%p\n",&c);
	 printf("%p\n",&d);

	 printf("Address of pointer : \n");
	 printf("%p\n",&iptr1);
	 printf("%p\n",&iptr2);
	 printf("%p\n",&iptr3);
	 printf("%p\n",&iptr4);

	 printf("Value of variable : \n");
	 printf("%d\n",*iptr1);
	 printf("%c\n",*iptr2);
	 printf("%f\n",*iptr3);
	 printf("%lf\n",*iptr4);
 }


/*
 *
ddress of variable : 
0x7ffde8ea40f8
0x7ffde8ea40f7
0x7ffde8ea40fc
0x7ffde8ea4100
Address of pointer : 
0x7ffde8ea4108
0x7ffde8ea4110
0x7ffde8ea4118
0x7ffde8ea4120
Value of variable : 
10
B
20.500000
37.800000


*/
