
#include<stdio.h>

 void main() {

	 int num=0;
	 int rem=0;
	 int sum=0;

	 printf("enter number: ");
	 scanf("%d",&num);

	 while(num!=0) {
	 
	 	rem= num % 10;
		sum = sum + rem;
		num = num / 10;

	 
	 }
	 printf("Sum=%d\n",sum);
 
 }

//enter number: 531
//Sum=9

