
#include<stdio.h>
 
 void main() {
 
	 char ch = 'A';
	 for(int i = 1; i <= 5; i++) {
	 
		 int count = 1;
		 for(int j =1; j <= 5; j++) {
		 
			 if(i > count) {
			 
				 count++;
				 printf("  ");
			 }
			 else {
			 
				 printf("%c ",ch);
				 ch++;
			 }
			 
		 }
		 printf("\n");
	 }
 }

/*
 
A B C D E
  F G H I
    J K L
      M N
        O
*/
