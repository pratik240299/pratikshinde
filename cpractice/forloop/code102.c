
#include<stdio.h>

 void main() {
 
 	int num;

	for(int i=1; i<=10; i++) {

		printf("enter the number:");
		scanf("%d",&num);

		if(num%2==0)
			printf("%d\n",num);
		else
			break;
	}

 }
