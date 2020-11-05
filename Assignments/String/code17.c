
#include<stdio.h>
#include<string.h>

 void main() {
 
	 char str1[20];
	 char str2[20];

	 printf("Enter the String1 : ");
	 scanf("%[^\n]",str1);

	 printf("Enter the String2 : ");
	 scanf(" %[^\n]",str2);

	 printf("Output : ");
	 strcat(str1,str2);
	 printf("%s\n",str1);

 }

/*
 * Enter the String1 : FirStr
Enter the String2 : SecStr
Output : FirStrSecStr

*/
