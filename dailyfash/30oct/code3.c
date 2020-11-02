
#include<stdio.h>

 void myStrReverse(char *str,int x) {
 
	 for(int i = x; i >= 0; i--) {
	 
			 printf("%c",*(str+i));
	 }
 }

 void main() {
 
	 int n,count = 0;
	 printf("Enter the size of string : ");
	 scanf("%d",&n);

	 printf("Enter the string : ");
	 char str[n];
	 scanf(" %[^\n]",str);

	 for(int i = 0; i < n; i++) {
	 
		 if(str[i] != '\0')
			 count++;
		 else if(str[i] == '\0')
			 break;
	 }
	 printf("OUTPUT : ");
	 myStrReverse(str,count);
	 printf("\n");

 }

/*
 * Enter the size of string : 20
   Enter the string : Pratik Shinde
   OUTPUT : ednihS kitarP

*/

