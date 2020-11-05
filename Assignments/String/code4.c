#include<stdio.h>
#include<string.h>

 void main() {
 
	 char info[20];
	 printf("Input : ");
	 scanf("%[^\n]",info);

	 printf("Output : ");
	 printf("%ld\n",strlen(info));
 
 }

/*
 * Input : India is my
   Output : 11

*/
