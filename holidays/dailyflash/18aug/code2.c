
#include<stdio.h>

 void main() {

	 char ch;
	 printf("Enter the character: ");
	 scanf("%c",&ch);

	 switch(ch) {
	 
		 case 'A':
		 case 'a':
			 printf("%c is vowel\n",ch);
			 break;
		 case 'E':
		 case 'e':
			 printf("%c is vowel\n",ch);
			 break;
		 case 'I':
		 case 'i':
			 printf("%c is vowel\n",ch);
			 break;
		 case 'O':
		 case 'o':
			 printf("%c is vowel\n",ch);
			 break;
		 case 'U':
		 case 'u':
			 printf("%c is vowel\n",ch);
			 break;
		 
		 default:
			 printf("%c is consonant\n",ch);
			 break;
	 }

 }

/*
 * Enter the character: E
   E is vowel
 */

