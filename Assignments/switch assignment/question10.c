
#include<stdio.h>

 void main() {
 
 	int num1,num2;
	int num;
	int a;

	printf("Enter two number:  ");
	scanf("%d %d",&num1,&num2);

	if(num1>0 && num2>0) {
		
		num=num1*num2;
		a=num%2;
	
			switch(a) {

				 case 1:
					printf("number is odd\n");
					break;
				 case 0:
					printf("number is even\n");	
					break;

			}

	}else
		printf("sorry negative number is not allowed\n");

 }
