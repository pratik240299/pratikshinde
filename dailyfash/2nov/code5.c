
#include<stdio.h>

 void mystring(char *str) {
 
	 while(*str != '\0') {
	 
		 if(*str == ' ')
			 printf("\n");
		 else
			 printf("%c",*str);
		 str++;
	 }
	 printf("\n");
 }
 void main() {
 
	 char str[30];
	 printf("Enter the string : ");
	 scanf("%[^\n]",str);

	 mystring(str);
	  
 }

/*
 * Enter the string : Change is inevitable
Change
is
inevitable

*/
