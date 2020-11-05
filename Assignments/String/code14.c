
#include<stdio.h>
#include<string.h>

 void main() {
 
	 char str1[20];
	 char str2[20];
	 printf("Enter the string : ");
	 scanf("%[^\n]",str1);

	 printf("Output : \n");
	 strcpy(str2,str1); 
	 printf("String1 : %s\n",str1);
	 printf("String2 : %s\n",str2);
 }

/*
Enter the string : Pratik Shinde
Output :
String1 : Pratik Shinde
String2 : Pratik Shinde

*/
