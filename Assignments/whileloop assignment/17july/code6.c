
#include<stdio.h>

 void main() {
 
 	int i=1;
	int num;
	int sum=0;

	printf("Enter the Number: ");
	scanf("%d",&num);

	while(i<=num) {
	
		sum=sum+i;
		i++;
	}

	printf("The sum of all natural numbers between 1 to 10 is :%d\n",sum);

 
 }


//Enter the Number: 10
//The sum of all natural numbers between 1 to 10 is :55

