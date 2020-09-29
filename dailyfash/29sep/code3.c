
#include<stdio.h>

 void main() {
 
	 int a = 10;
         int *iptr = &a;

	 iptr = iptr + 2;
	 printf("%p\n",iptr);
	 
	 iptr = iptr + 3;
	 printf("%p\n",iptr);
	 
	 iptr = iptr + 1;
	 printf("%p\n",iptr);
 }

/*
 * 0x7fffc58da574
0x7fffc58da580
0x7fffc58da584

*/

 
