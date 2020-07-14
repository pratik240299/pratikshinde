
#include<stdio.h>

 void main() {
 
 char ch;
 printf("enter the character:");
 scanf("%c",&ch);

 if(ch>='A' && ch<='Z'){
 	printf("%c is uppercse character\n",ch);
 } 
 else if(ch>='a' && ch<='z') {
 	printf("%c is lower case\n",ch);
 }
 else if (ch>='0' && ch<='9') {
 	printf("%c is digit",ch);
 }
 else{
 	printf("%c is special character\n",ch);
 }
		

 
 
 
 }
