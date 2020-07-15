
#include<stdio.h>

 void main() {
 
 	int i=1;
	int num;

	while(i<=20) {
	
		printf("enter the number:");
		scanf("%d",&num);

		if(num%4==0 && num%10==0)
			break;
		else
			printf("num=%d\n",num);

		i++;
	
	}
	printf("out of while\n");

 }
