
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

	 void *vptr = ch;
	 for(int i = 0; i < n; i++) {
	 
		 vptr = ch + i;
		 
		 if(ch[i] >= 0 && ch[i] <= 9) {
		 
			 printf("%d ",*(int*)vptr);
		 }
		 else {
		 
			 printf("%c ",*(int*)vptr);
		 }
	 }
	 printf("\n");
	 for(int i = 0; i < n; i++) {
	 
		 vptr = ch + i;
		 
		 if(ch[i] >= 0 && ch[i] <= 9) {
		 
			 printf("Digit\n");
		 }
		 else {
		 
			 printf("Character\n");
		 }
	 }
 }
