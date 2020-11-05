
#include<stdio.h>

 void main() {
 
	 char input[50];
	 printf("Input : ");
	 scanf("%[^\n]",input);

	 char *str = input;

	 printf("Output : ");
	 while(*str != '\0') {
	 
		 if(*str >= 'b' && *str <= 'y') {
		
			 printf("%c",*str);
		 }
		 else if(*str == ' ') {
		 
		 	 printf(" ");
		 }
		 str++;
	 }
	 printf("\n");
 }

/*
 * Input : mn jn kn kazfd
   Output : mn jn kn kfd

*/
