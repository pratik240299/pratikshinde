
#include<stdio.h>

 void main() {
 
	 char str[20];
	 printf("Input : ");
	 scanf("%[^\n]",str);

	 printf("Output : ");

	 for(int i = 0; str[i] != '\0'; i++) {
	 
		 if(str[i] >= 65 && str[i] <= 90)
			 printf("%c",str[i] + 32);
		 else
			 printf("%c",str[i]);
	 }
	 printf("\n");
 }

/*
 * Input : DevIce DriVer
   Output : device driver
*/
