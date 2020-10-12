
#include<stdio.h>

 void main() {

	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);
	 char carr[n];
	 printf("Enter the element in array : ");

	 for(int i = 0; i < n; i++) {
	 
		 scanf(" %c",&carr[i]);
	 }
         char* arrptr[n];
	 for(int i = 0; i < n; i++) {
	 
		 arrptr[i] = &carr[i];
	 }
	 for(int i = 0; i < n; i++) {
	 
		 if(carr[i] >= 65 && carr[i] <= 90) {
		 
			 printf("%c ",*(arrptr[i]) + 32);
		 }
		 else if(carr[i] >= 97 && carr[i] <= 122) {
		 
			 printf("%c ",*(arrptr[i]) - 32);
		 }
	 }
	 printf("\n");

 }

/*
 * Enter the size of array : 3
Enter the element in array : a G h
A g H

*/
