
#include<stdio.h>

 void main() {
 
	 for(int i = 1; i <= 5; i++) {
	 
		 int count = 1;
		 int ch = 'A';
		 for(int j = 1; j <= 5; j++) {
		 
			 if(count < i) {
			 
				 count++;
				 printf("  ");
			 }
			 else {
			 
				 printf("%c ",ch);
				 ch++;
			 }
		 }
	 }
 }
