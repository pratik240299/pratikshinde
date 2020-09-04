
#include<stdio.h>

 void main() {
 
	 int num;
	 printf("Enter the number : ");
	 scanf("%d",&num);

	 for(int i = 10; i >= 1; i--) {
	 
		 printf("%d x %d = %d\n",num,i,num*i);
	 }
 }

/*
 *
 * Enter the number : 2
2 x 10 = 20
2 x 9 = 18
2 x 8 = 16
2 x 7 = 14
2 x 6 = 12
2 x 5 = 10
2 x 4 = 8
2 x 3 = 6
2 x 2 = 4
2 x 1 = 2

*/
