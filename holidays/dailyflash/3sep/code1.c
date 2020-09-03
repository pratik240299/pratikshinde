
#include<stdio.h>

 void main() {
 
	 int num;
	 printf("Enter the number : ");
	 scanf("%d",&num);
	 int store = num,sum = 0;

	 for(int i = 1; i < num; i++) {
	 
		 if(num % i == 0)
		 	sum = sum + i;
	 }
	 if(sum == store)
		 printf("%d is perfect number \n",store);
	 else
		 printf("%d is not perfect number \n",store);
 }

/*
 * Enter the number : 6
   6 is perfect number
 */
