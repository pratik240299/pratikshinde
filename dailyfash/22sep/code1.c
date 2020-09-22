
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

	 printf("Input is : \n");
	 printf("%d\n",a);
	 printf("%c\n",b);
	 printf("%f\n",c);
	 printf("%lf\n",d);

	 printf("size of pointer : \n");
	 printf("%ld\n",sizeof (iptr1));
	 printf("%ld\n",sizeof (iptr2));
	 printf("%ld\n",sizeof (iptr3));
	 printf("%ld\n",sizeof (iptr4));
	 
	 printf("size of variable : \n");
	 printf("%ld\n",sizeof (a));
	 printf("%ld\n",sizeof (b));
	 printf("%ld\n",sizeof (c));
	 printf("%ld\n",sizeof (d));



 
 }


/*
 *
Input is :
10
B
20.500000
37.800000
size of pointer :
8
8
8
8
size of variable :
4
1
4
8

*/
