
#include<stdio.h>

 void main() {
 

	 float a,b,c,d,e,max = 0.0;
	 int store = 0;
	 printf("Enter the element 1 : ");
	 scanf("%f",&a);
	 printf("Enter the element 2 : ");
	 scanf("%f",&b);
	 printf("Enter the element 3 : ");
	 scanf("%f",&c);
	 printf("Enter the element 4 : ");
	 scanf("%f",&d);
	 printf("Enter the element 5 : ");
	 scanf("%f",&e);

	 float *iptr1 = &a;
	 float *iptr2 = &b;
	 float *iptr3 = &c;
	 float *iptr4 = &d;
	 float *iptr5 = &e;

	 float* arrptr[] = {iptr1,iptr2,iptr3,iptr4,iptr5};

	 for(int i = 0; i < 5; i++) {
	 
		 if(*arrptr[i] > max) {
			 
			 max = *arrptr[i];
			 store = i;
		 }
	 }
	 printf("Biggest value is %f and its index is %d\n",max,store);


 }

/*
 * Enter the element 1 : 23.4000
Enter the element 2 : 43.2300
Enter the element 3 : 32.2200
Enter the element 4 : 68.2100
Enter the element 5 : 9.8000
Biggest value is 68.209999 and its index is 3


*/
