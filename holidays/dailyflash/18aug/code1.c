
#include<stdio.h>

 void main() {
 
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c",&ch);

    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
    
	    printf("%c is alphabet\n",ch);
    }
    else 
	    printf("%c is not alphabet\n",ch);
 }

/*
 *
 * Enter the alphabet: v
   v is alphabet
 */
