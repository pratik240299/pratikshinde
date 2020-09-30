
#include<stdio.h>

 void main() {
 
	 int arr[] = {10,20,30,40,50};
	 int *iptr = &arr[1];
	 printf("%d\n",*iptr);

	 int *ansptr = ++iptr;
	 printf("%p\n",ansptr);
	 printf("%d\n",*ansptr);
	 printf("%d\n",*iptr);

	 ansptr = iptr++;
	 printf("%p\n",ansptr);
	 printf("%d\n",*ansptr);
	 printf("%d\n",*iptr);
 }

/*
 *
 * 20
0x7ffcf75aa728
30
30
0x7ffcf75aa728
30
40

*/
