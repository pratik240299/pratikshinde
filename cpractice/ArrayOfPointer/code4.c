
#include<stdio.h>

 void main() {
 
	 int a = 10,b = 20,c = 30;

	 int *iptr1 = &a;
	 int *iptr2 = &b;
	 int *iptr3 = &c;

	 int **pptr1 = &iptr1;
	 int **pptr2 = &iptr2;
	 int **pptr3 = &iptr3;

	 int* arrptr[] = {pptr1,pptr2,pptr3};

	 // address in array of pointer :  
	 printf("%p\n",arrptr[0]);	//400
	 printf("%p\n",arrptr[1]);	//500
	 printf("%p\n",arrptr[2]);	//600

	 //excessing data by array indices : 
	 printf("%d\n",*(arrptr[0]));	//10
	 printf("%d\n",*(arrptr[1]));	//20
	 printf("%d\n",*(arrptr[2]));	//30

	 // excessing data by using totally pointer from array :  
	 printf("%d\n",*(*(arrptr + 0)));	//10
	 printf("%d\n",*(*(arrptr + 1)));	//20
	 printf("%d\n",*(*(arrptr + 2)));	//30



 }
