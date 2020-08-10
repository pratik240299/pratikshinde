
#include<stdio.h>

 void main() {
 
	 int num ;
	 int rem = 0,mult ;
	 int sum ;
	 char ch ;

	 do {

	 	printf("Enter the number: ");
	 	scanf("%d",&num);

		int var = num;
		  
		 sum = 0;
	 	for(num; num != 0; num = num / 10 ) {
	 
		 	rem = num % 10;
			mult = 1;

		 	for(int i = 1; i <= rem; i++ ) {
		 
				 mult = mult * i;
			}

		 	sum = sum + mult;
	 	}
	 	if(sum == var ) {
	 
			 printf("its is strong number\n");
	 	}
	 	else {
	 
			 printf("Its is not strong number\n");
	 	}
		printf("do u want to contine....? ");
		scanf(" %c",&ch);

	 }while(ch == 'Y' || ch == 'y');


 }

/*
Enter the number: 145
its is strong number
do u want to contine....? y
Enter the number: 120
Its is not strong number
do u want to contine....? n

*/
