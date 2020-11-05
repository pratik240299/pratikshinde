
#include<stdio.h>

 void main() {
 
	 char input[20];
	 int c1 = 1;
	 printf("Input : ");
	 scanf("%[^\n]",input);

	 printf("Output : ");
	 char *str = input;
	 while(*str != '\0') {
	 
		 if(*str == ' ')
			 c1++;
		 str++;
	 }
	 printf("%d\n",c1);
 }

/*
 * Input : In my company
   Output : 3

*/
