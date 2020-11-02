
#include<stdio.h>

 void mydivide(char *str,int x) {
 
	 for(int i = 0; i < x/2; i++) {
	 
		 printf("%c",*(str+i));
	 }
	 printf("\n");
	 for(int i = (x/2); i <= x; i++) {
	 
		 printf("%c",*(str+i));
	 }
	 printf("\n");
 }

 void main() {
 
	 char str[10];
	 int i= 0,count = 0;
	 printf("Enter the String : ");
	 scanf("%[^\n]",str);


	 while(*(str+i) != '\0') {
	 
		 count++;
		 i++;
	 }
	 mydivide(str,count);
 }

/*
 * Enter the String : ABCD
   AB
   CD
*/
