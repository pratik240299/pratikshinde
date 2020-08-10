
#include<stdio.h>

 void main() {

	 char ch ;
 
	 do {
	 
		 int num;
		 printf("Enter the number: ");
		 scanf("%d",&num);
		 int sum = 0;

		 for(int i = 1; i < num; i++) {
		 
			 if(num % i == 0 ) {
			 
				 sum = sum + i;
			 }
		 }

		 if(sum == num) {
		 
			 printf("%d is perfrct number\n",num);
		 }
		 else {
		 
			 printf("%d is not perfect number\n",num);
		 }

		 printf("do u want to continue...? ");
		 scanf(" %c",&ch);
	 }while(ch == 'Y' || ch == 'y');

 }

/*
 
Enter the number: 6
6 is perfrct number
do u want to continue...? y
Enter the number: 12
12 is not perfect number
do u want to continue...? n

*/
