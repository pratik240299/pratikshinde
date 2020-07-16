
#include<stdio.h>

 void main() {
 
	int num;

	printf("enter the integer:");
	scanf("%d",&num);

	if( num%1==0 && num%num==0)
		printf("%d is prime number\n",num);
	else
		printf("%d is not prime number\n",num);	
 
 
 }


//enter the integer:5
//5 is prime number

