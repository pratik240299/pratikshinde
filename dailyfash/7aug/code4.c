
#include<stdio.h>
 
 void main() {
	 char ch ;
	 char choose;
 
	 printf("!.....Welcome to the burger king....!\n");
	 printf("1: veg \n");
	 printf("2: nonveg\n");

	
	 do{

		 int choice;
		 printf("enter choose: ");
		 scanf("%d",&choice);

		 switch(choice) {
		 
			 case 1:
				 printf("   a. veggeie tikki burger\n");
				 printf("   b. aloo tikki burger\n");
				 printf("   c. mushroom veggeie cheese burger\n");
				 printf("   d. peanut butter sweet potato burger\n");

				
				 printf("plz select ur choice burger: ");
				 scanf(" %c",&choose);

				 switch(choose) {

					 case 'a':
					 case 'A':	 
				 		printf(" 	veggeie tikki burger\n");
						break; 
					 case 'b':
					 case 'B':	 
				 		printf(" 	aalo tikki burger\n");
						break; 
					 case 'c':
					 case 'C':	 
				 		printf(" 	mushroom veggeie cheese burger\n");
						break; 
					 case 'd':
					 case 'D':	 
				 		printf(" 	peanut butter sweet potato burger\n");
						break;
				 }	
				 break;
			 case 2:
				 printf("   a. chicken tikki burger\n");
				 printf("   b. mutton tikki burger\n");
				 printf("   c. chicken fry cheese burger\n");
				 printf("   d. fish burger\n");

			
				 printf("plz select ur choice burger: ");
				 scanf(" %c",&choose);

				 switch(choose) {

					 case 'a':
					 case 'A':	 
				 		printf("	chicken tikki burger\n");
						break; 
					 case 'b':
					 case 'B':	 
				 		printf("	mutton tikki burger\n");
						break; 
					 case 'c':
					 case 'C':	 
				 		printf("	chicken fry cheese burger\n");
						break; 
					 case 'd':
					 case 'D':	 
				 		printf("	fish burger\n");
						break;		
				 }
				 break;


				
		 }	
		 printf("do u want to eat more: ");
		 scanf(" %c",&ch);
		 
	 }while(ch == 'Y' || ch == 'y'); 
 }


/*
 *
 
!.....Welcome to the burger king....!
1: veg
2: nonveg
enter choose: 2
   a. chicken tikki burger
   b. mutton tikki burger
   c. chicken fry cheese burger
   d. fish burger
plz select ur choice burger: d
	fish burger
do u want to eat more: n

*/






