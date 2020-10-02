
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 char ch[n];
	 printf("Enter the element in arry : ");

	 for(int i = 0; i < n; i++) {
	 
		 scanf(" %c",&ch[i]);
	 }
	 char *cptr = ch;

	 printf("Output : ");
	 for(int i = 0; i < n; i++) {
	 
		 if(*(cptr+i)=='A'||*(cptr+i)=='E'||*(cptr+i)=='I'||*(cptr+i)=='O'||*(cptr+i)=='U'||*(cptr+i)=='a'||*(cptr+i)=='e'||*(cptr+i)=='i'||*(cptr+i)=='u'||*(cptr)=='o') {
	 
			 if(*(cptr + i) >= 97 && *(cptr + i) <= 122) {
			 
				 *(cptr + i) = *(cptr + i) - 32;
				 printf("%c ",*(cptr + i));
			 }
			 else {		 
				 printf("%c ",*(cptr + i));
			 }
		 }
		 else  {
		
			 if(*(cptr + i) >= 65 && *(cptr + i) <= 90) {
			 
				 *(cptr + i) = *(cptr + i) + 32;
				 printf("%c ",*(cptr + i));
			 }
			 else {		 
				 printf("%c ",*(cptr + i));
			 }
		 }
 	}
	 printf("\n");
 }

/*
 *
 * Enter the size of array : 5
Enter the element in arry : M a t C h
Output : m A t c h

*/
