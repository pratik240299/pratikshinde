
#include<stdio.h>

 void main() {
 
 char ch;
 printf("enter the alphabet:");
 scanf(" %c",&ch);
if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' ||  ch=='e' || ch=='i' || ch=='o' || ch=='u')
{
       printf("%c is a vowels\n",ch);	
 }
else {
 	printf("%c is a consonant\n",ch);
}

 }
