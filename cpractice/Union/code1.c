
#include<stdio.h>

 union batsmen {

	 int jerno;
	 double avg;
 }msd;

 void main() {
 
	 printf("%ld\n",sizeof(msd));
	 printf("%ld\n",sizeof(union batsmen));
	 printf("%p\n",&msd.jerno);
	 printf("%p\n",&msd.avg);
 }

/*
8
8
0x55ab94c62018
0x55ab94c62018

*/
