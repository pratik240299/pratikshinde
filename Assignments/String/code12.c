
#include<stdio.h>

 void main() {
 
	 char str[20];
	 printf("Enter the string : ");
	 scanf("%[^\n]",str);

	 printf("Output : ");
	 for(int i = 0; str[i] != '\0'; i++) {
	 
		 if(str[i] >= 65 && str[i] <= 90)
			 printf("%c",str[i]+32);
		 else if(str[i] >= 97 && str[i] <= 122)
			 printf("%c",str[i]-32);
		 else if(str[i] == ' ')
			 printf(" ");
	 }
	 printf("\n");

 }

/*
 * Enter the string : DevIce DriVer
   Output : dEViCE dRIvER

*/
