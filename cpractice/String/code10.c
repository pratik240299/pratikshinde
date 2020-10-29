
#include<stdio.h>

 void main() {
 
	 char arr[20],ch;

	 int i = 0;
	 while((ch = getchar()) != '\n') {
	  
		arr[i] = ch;
		i++;
	 }
	 arr[i] = '\0';
	 printf("%s\n",arr);
 }
