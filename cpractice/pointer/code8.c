
#include<stdio.h>
 
 void main() {
 
	 char arr[] = {'A','B','C','D','E'};
	 char *iptr = arr;
	 printf("%c\n",*iptr);
	 
	 iptr = iptr + 1;
	 printf("%c\n",*iptr);
	 
	 iptr = iptr + 3;
	 printf("%c\n",*iptr);
 }

/*
 * A
B
E


*/
