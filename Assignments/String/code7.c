
#include<stdio.h>
 
 void main() {
 
	 char input[20];
	 int count = 0,even = 0,odd = 0;
         printf("Input : ");
	 scanf("%[^\n]",input);

	 char *str = input;

	 while(*str != '\0') {

		 if(*str == ' ') {
		 
			 if(count % 2 == 0)
				 even++;
			 else
				 odd++;
			 count = 0;
		 }
		 else {
			 count++;			 
		 }
		 str++;
	 }
	 if(count % 2 != 0)
		 odd++;
	 else
		 even++;
	 printf("Even: %d Odd: %d\n",even,odd);

 } 

/*
 * Input : in my company
   +Even: 2 Odd: 1

*/
