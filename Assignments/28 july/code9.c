
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the number of rows: ");
	 scanf("%d",&n);

	 for(int i =1; i <= n; i++) {
	 
		 char ch = 'a';
		 for(int j =1; j <= 5; j++) {
		 
			 if(i + j <= 5) {
			 
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
 *
Enter the number of rows: 5
        a
      a b
    a b c
  a b c d
a b c d e

*/
