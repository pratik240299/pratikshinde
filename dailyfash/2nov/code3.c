
#include<stdio.h>

 void mySubString(char *str, char *sub) {
 
	 int flag = 0;
	 while(*str != '\0') {
	 
		 if(*str == *sub) {
		 
		 }
	 }
 }

 void main() {
 
	 char str[10];
	 printf("Enter the String : ");
	 scanf("%[^\n]",str);
	 char sub[10];
	 printf("Enter the Sub String : ");
	 scanf("%[^\n]",sub);

	 mySubString(str,sub);
 }
