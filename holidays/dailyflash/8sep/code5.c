
#include<stdio.h>

 void main() {
 
	 int num;
	 printf("Enter the ending number :");
	 scanf("%d",&num);

	 for(int i = 1; i <= num; i++) {
	 
		 int sum = 0;
		 for(int j = 1; j < i; j++) {
		 
			 if(i % j == 0)
				 sum = sum + j;
		 }
		 if(sum == i || i == 1)
			 printf("%d ",i);
	 }
	 printf("\n");
 }

/*
 *
 * Enter the ending number :100
   1 6 28
 */
