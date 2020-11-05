
#include<stdio.h>

 void main() {
 
	 char str[20];
	 int n,x = 0;
	 printf("Enter the String : ");
	 scanf("%[^\n]",str);
	 printf("Ente the number upto : ");
	 scanf("%d",&n);

	 for(int i = 0; i < n; i++) {
	 
		  x = str[i];
		  str[i] = str[(n-1)-i];
		  str[(n-1)-i] = x;
	 }
	 /*
	 for(int i = 0; i < n; i++) {
         
		 printf("%c",str[i]);
	 }
	 */


 }
