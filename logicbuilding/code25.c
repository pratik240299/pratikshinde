
#include<stdio.h>

 void main() {
 
	 int count = 0,rem = 0;
	 int num =12334;
	 int var = num;
	 for(num; num != 0; num = num / 10) {
	 
		 rem = num % 10;
		 count++;
	 }
	 printf("lenght of %d is %d\n",var,count);


 }

/*
 * lenght of 12334 is 5

 */
