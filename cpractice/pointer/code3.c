
#include<stdio.h>

 void main() {
 
	 char *cptr = NULL;   // null pointer or 0   #define NULL 0;
	 char ch = 'A';
	 cptr = &ch;

	 float x = 20.5;
	 float *fptr = &x;

	 int var = 20;
	 int *iptr = &var;

	 double d = 38.50;
	 double *dptr = &d;


	 printf("%ld\n",sizeof (ch));
	 printf("%ld\n",sizeof (x));
	 printf("%ld\n",sizeof (var));
	 printf("%ld\n",sizeof (d));
	 
	 printf("\n");

	 printf("%ld\n",sizeof (cptr));
	 printf("%ld\n",sizeof (iptr));
	 printf("%ld\n",sizeof (fptr));
	 printf("%ld\n",sizeof (dptr));
 }


/*
 *
1
4
4
8

8
8
8
8

