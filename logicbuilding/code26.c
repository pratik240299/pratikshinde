
#include<stdio.h>

 void main() {
 
	 int count = 0,num;
	 printf("enter the number: ");
	 scanf("%d",&num);
	 for(int i = 1; i <= num; i++)  {

		 if(num % i == i0) {
		 
			 count++;
		 }
	 }
	 if(count == 2)
		printf("%d is prime number\n",num);
	 else
		printf("%d is not prime number\n",num); 
 }

/*
enter the number: 13
13 is prime number

enter the number: 34
34 is not prime number

*/
