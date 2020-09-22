

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


	 printf("%c\n",ch);
	 printf("%p\n",cptr);
	 printf("%c\n",*cptr);
	 printf("%f\n",x);
	 printf("%p\n",fptr);
	 printf("%f\n",*fptr);
	 printf("%d\n",var);
	 printf("%p\n",iptr);
	 printf("%d\n",*iptr);
	 printf("%lf\n",d);
	 printf("%p\n",dptr);
	 printf("%lf\n",*dptr);

 }


/*
 *
 *
*/
