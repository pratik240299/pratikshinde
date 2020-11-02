
#include<stdio.h>

 void mylower(char x) {
 
	 x = x + 32;
	 printf("%c",x);
 }
 void myupper(char x) {
 
	 x = x + 32;
	 printf("%c",x);
 }
 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 printf("Enter the string : ");
	 char str[n];
	 scanf(" %[^\n]",str);

	 while(*str != '\0') {
	
		if(*str >= 65 && *str <= 90) {
		
			mylower(*str);
		}
		else if(*str >= 97 && *str <= 122) {
		
			myupper(*str);
		}
		str[+1]i;

	 }
 }
