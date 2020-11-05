
#include<stdio.h>

 void main() {
 
	 char input[20];
	 int count = 0,c1 = 0;
	 printf("Input : ");
	 scanf("%[^\n]",input);

	 for(int i = 0; input[i] != '\0'; i++) {
	 
		 if(input[i] == ' ')
			 count++;
	 }
	 printf("Output : ");
	 for(int i = 0; input[i] != '\0'; i++) {
	 
		 if(input[i] == ' ')
			 c1++;
		 else{
		 
			 if(c1 == count)
				 printf("%c",input[i]);
		 }
	 }
	 printf("\n");
 }

/*
 * Input : in my company
   Output : company

*/
