
#include<stdio.h>

 void main() {
 
	 int a,b,c = 0;
	 printf("Enetr the 2 number : ");
	 scanf("%d %d",&a,&b);
	 c = a;

	 a = a / b;
	 b = c % b;
	 printf("Quotient : %d\n",a);
	 printf("Reminder : %d\n",b);
 }

/*
 *
Enter the 2 number : 10 5
Quotient : 2
Reminder : 0

*/
