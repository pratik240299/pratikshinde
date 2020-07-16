
#include<stdio.h>

 void main() {
 
  	int i;
	printf("enter the number:");
	scanf("%d",&i);

	for(i;i<=65;i++)
	{
	
		if(65%i==0)
			printf("%d is divisible by 65\n",i);
	}	
 
 }
