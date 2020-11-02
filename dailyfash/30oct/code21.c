
#include<stdio.h>

 void mycase(char *str) {
 
	 while(*str != '\0') {
	 
		 if(*str >= 65 && *str <= 90)
			 printf("%c",*(str)+32);
		 else if(*str >= 97 && *str <= 122)
			 printf("%c",*(str)-32);
		 else if(*str == ' ')
			 printf(" ");
		 str++;
	 }
 }

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 printf("Enter the string : ");
	 char str[n];
	 scanf(" %[^\n]",str);

	 mycase(str);
	 printf("\n");
 }

/*
 * Enter the size of array : 20
Enter the string : pRATIK sHINDE
Pratik Shinde

*/
