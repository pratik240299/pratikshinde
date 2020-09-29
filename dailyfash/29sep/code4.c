
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 char ch[n];
	 printf("Enter the element in array : ");
	 
	 for(int i = 0; i < n; i++) {
	 
		 scanf(" %c",&ch[i]);
	 }
	 for(int i = 0; i < n; i++) {
	 
		 int *cptr = &ch[i];
		 if(ch[i] >= 65 && ch[i] <= 90) {
		 
			 *cptr = ch[i] + 32;
			 printf("%c ",*cptr);
		 }
		 else if(ch[i] >= 97 && ch[i] <= 122) {
		 
			 *cptr = ch[i] - 32;
			 printf("%c ",*cptr);
		 }
	 }
 } 
