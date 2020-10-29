
#include<stdio.h>
#include<string.h>

// function strlen code written by me : 

 long mystrlen(char *str) {
 
	 int count = 0;
	 while(*(str) != '\0') {
	 
		 str++;
		 count++;
	 }
	 return count;
 }

 void main() {
 
	 char *str1 = "Core2webtech";
	 char str2[10] = "Bilearn";

	 printf("%ld\n",mystrlen(str1));
	 printf("%ld\n",mystrlen(str2));
 }

/*
 * 12
   7
   */

