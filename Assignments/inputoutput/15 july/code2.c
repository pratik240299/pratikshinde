
#include<stdio.h>

 void main() {
 
 	char ch;

	printf("Enter the charcter: ");
	scanf("%c",&ch);

	if( ch>=65 && ch<=90 )
		printf("enter character is UPPERCASE character\n");
	else if(ch>=90 && ch<=122)
		printf("enter character is LOWERCASE character\n");
 }

//Enter the charcter: A
//enter character is UPPERCASE character

