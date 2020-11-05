
#include<stdio.h>
#include<string.h>


 void main() {
 
	 char str1[20];
	 char str2[20];
	 printf("Enter the String1 : ");
	 scanf("%[^\n]",str1);
	 printf("Enter the String2 : ");
	 scanf(" %[^\n]",str2);

	 int ret;

	 ret = strcmp(str1,str2);

	 if(ret == 0)
		 printf("Both string are equal\n");
	 else
		 printf("Both string are not equal\n");

 }

/*
Enter the String1 : FirStr
Enter the String2 : FirStr
Both string are equal

*/

