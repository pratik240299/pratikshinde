
#include<stdio.h>

 void main() {
 
	 int a = 10,b = 20,c= 30;

	 int* arrptr[3] = {&a,&b,&c};

	 printf("size of element : \n");
	 for(int i = 0; i < 3; i++) {
	 
		 printf("%ld\n",sizeof(*(arrptr[i])));
	 }
 }

/*
size of element : 
4
4
4
*/

