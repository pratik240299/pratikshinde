
#include<stdio.h>

 void myStrReverse(char *str,int x) {
 
	 char new;
	 for(int i = 0; i <= x/2; i++) {
	 
		 new = *(str+i);
		*(str+i) = *(str+(x-i));
		*(str+(x-i)) = new;
	 }
	 for(int i = 0; i <= x; i++) {
	 
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

