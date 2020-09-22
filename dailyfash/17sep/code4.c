
#include<stdio.h>

 void main() {
 
	 char ch1[100];
	 int z = 0,count = 0;
         char ch2[z];		 

	 printf("Enter the character : ");
	 for(int i = 0; i < 100; i++) {
	 
		 scanf("%c",&ch1[i]);
		 count++;
		 if(ch1[i] == \0)
			break; 
	 }
	 for(int i = 0; i < count; i++) {
	 
		 if(ch1[i] >= 97 && ch1[i] <= 122) {
		 
			 ch2[z] = ch1[i];
			 z++;
		 }
	 }
	 for(int i = 0; i < z; i++) {
	 
		 printf("%c ",ch2[z]);
	 }
	 printf("\n");
 }
