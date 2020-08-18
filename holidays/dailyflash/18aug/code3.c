
#include<stdio.h>

 void main() {
 
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
	    printf("%c is alphabet\n",ch);
    }
    else if(ch >= 48 && ch <= 57) {
	    printf("%c is not alphabet\n",ch);
    }
    else 
	    printf("%c is special character\n",ch);
 }

/*
 *
 *
 * Enter the character: *
   * is special character

 */
