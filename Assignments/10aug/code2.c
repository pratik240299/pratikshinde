
#include<stdio.h>

 void main() {
 
	 printf("!-------Welcome to the indian largest theme park-------!\n");
	 printf("which type of rides you wny ...?\n");
	 printf("	1 - chidren rides\n");
	 printf("	2 - adult rides\n");
	 int choice;
	 char ch ;
	 printf("Enter ur choice: ");
	 scanf("%d",&choice);

	 switch(choice) {
	 
		case 1:
			printf("a. air jumbo\n");
			printf("b. Bugaboo\n");
			printf("c. Jumping Joey\n");
			printf("which ride u want :");
			scanf(" %c",&ch);

			switch(ch) {
			
				case 'a':
				case 'A':
					printf(" ..Enjoy ur ride..\n");
					break;
				case 'b':
				case 'B':
					printf(" ..Enjoy ur ride..\n");
					break;
				case 'c':
				case 'C':
					printf(" ..Enjoy ur ride..\n");
					break;

			}
			break;
		case 2:
			printf("a. Roller coaster\n");
			printf("b. Fairground ride\n");
			printf("c. Thrillseekers\n");
			printf("which ride u want :");
			scanf(" %c",&ch);

			switch(ch) {
			
				case 'a':
				case 'A':
					printf(" ..Enjoy ur ride..\n");
					break;
				case 'b':
				case 'B':
					printf(" ..Enjoy ur ride..\n");
					break;
				case 'c':
				case 'C':
					printf(" ..Enjoy ur ride..\n");
					break;

			}
			break;
	 }
	  
	 printf("Thanku ..vist again\n");


 }



/*
 *
!-------Welcome to the indian largest theme park-------!
which type of rides you wny ...?
	1 - chidren rides
	2 - adult rides
Enter ur choice: 1
a. air jumbo
b. Bugaboo
c. Jumping Joey
which ride u want :c
 ..Enjoy ur ride..
Thanku ..vist again

*/
