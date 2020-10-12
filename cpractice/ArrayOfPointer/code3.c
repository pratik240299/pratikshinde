
#include<stdio.h>

 void main() {
 
	 int a = 10,b = 20,c = 30;

	 int *iptr1 = &a;
	 int *iptr2 = &b;
	 int *iptr3 = &c;

	 int* arrptr[] = {iptr1,iptr2,iptr3};


	 printf("%p\n",arrptr[0]);	 // 100
	 printf("%p\n",arrptr[1]);	//200
	 printf("%p\n",arrptr[2]);	//300
	 
	 printf("%d\n",*arrptr[0]);	 // 10
	 printf("%d\n",*arrptr[1]);	//20
	 printf("%d\n",*arrptr[2]);	//30

	 printf("%d\n",*(*(arrptr + 0)));  // 10
	 printf("%d\n",*(*(arrptr + 1)));  // 20
	 printf("%d\n",*(*(arrptr + 2)));  // 30

 }


/*
 *
 * 0x7ffd3d0312ec
0x7ffd3d0312f0
0x7ffd3d0312f4
10
20
30
10
20
30

*/
