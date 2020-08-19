
#include<stdio.h>

 void main() {
 
	 char ch ;
	 printf("Enter the character: ");
	 scanf("%c",&ch);

	 if(ch >= 97 && ch <= 122) 
		 printf("letter %c is in lowercase\n",ch);
	 else if(ch >= 65 && ch <= 90) 
		 printf("letter %c is in upeercase\n",ch);
 }

/*
 *
 * Enter the character: v
   letter v is in lowercase
*/
