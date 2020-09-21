
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);
	 
	 char ch[n];
	 printf("Enter the elelment in array : ");

	 for(int i = 0; i < n; i++) {
	 
		 scanf(" %c",&ch[i]);
	 }
	 for(int i = 0; i < n-1; i++) {
	 
		 for(int j = 0; j <= i; j++) {
		 
			 printf("%c ",ch[j]);
			 if(j == (n-2)) {
			 
				 j++;
				 printf("%c ",ch[j]);
			 }
		 }
		 printf("\n");
	 }
 }

/*
 *
S
S T
S T A
S T A C K

*/
