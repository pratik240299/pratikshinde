
#include<stdio.h>

 void main() {
 
	 int num;
	 printf("Enter the number : ");
	 scanf("%d",&num);

	 for(num; num >= 0; num--) {
	 
		 if(num % 2 == 0)
			 printf("%d ",num);
	 }
	 printf("\n");
 }

 /*
  *
  * Enter the number : 100
100 98 96 94 92 90 88 86 84 82 80 78 76 74 72 70 68 66 64 62 60 58 56 54 52 50 48 46 44 42 40 38 36 34 32 30 28 26 24 22 20 18 16 14 12 10 8 6 4 2 0 
*/ 

