
#include<stdio.h>

 void main() {
 
	 int i = 1;

	 while(i <= 4) {
	 
		 int j = 1;
		 char ch = 'a';
		 while(j <= 4) {

			 if(i + j >= 5) {
			 	printf("%c",ch);
			 	ch++;
			 }

			 else
				 printf(" ");
		 	 
			 j++;
		 }
		

		 printf("\n");
		 i++;
	 }
 }

/*

   a
  ab
 abc
abcd

*/


