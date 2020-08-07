
#include<stdio.h>

 void main() {
 
	 int num ;
	 char ch = 'Y';

	 do {
	 
		 printf("Enter the number : ");
		 scanf("%d",&num);

		 int var = num;
		 int rem = 0;
		 int rev = 0;

		 while(num != 0) {
		 
			 rem = num % 10;
			 rev = rev*10 + rem;
			 num = num / 10;
		
		 }

		 printf("rev of %d is %d\n",var,rev);

		 printf("do u want to continue: ");
		 scanf(" %c",&ch);

	 }while(ch == 'Y' || ch == 'y');

 }

/*
 
Enter the number : 12345
rev of 0 is 54321
do u want to continue: y
Enter the number : 09876
rev of 0 is 6789
do u want to continue: n

*/
