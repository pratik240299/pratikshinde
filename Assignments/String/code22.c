
#include<stdio.h>
#include<string.h>

 void main() {
 
	 char str[20];
	 printf("Enter the String : ");
	 scanf("%[^\n]",str);

	 printf("Output : ");
	 printf("%s",strrev(str));

 }
