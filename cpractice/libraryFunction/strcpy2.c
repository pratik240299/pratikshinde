
#include<stdio.h>
#include<string.h>

 char* mystrcpy(char *str2, char *str1) {
 
	 int i = 0;
	 while(*(str1 + i) != '\0') {
	 
		 *(str2+i) = *(str1+i);
		 i++;
	 }
	 *(str2+i) = '\0'i;
	 return str2;
 }
 void main() {

 
	 char *str1 = "Bielearn";
	 char str2[10];

	 //strcpy(str2,str1);
	 printf("%s\n",str1);
	 printf("%s\n",mystrcpy(str2,str1));
	 //puts(str1);
	 //puts(str2);
 }

/*
 * Bielearn
   Bielearn

*/
