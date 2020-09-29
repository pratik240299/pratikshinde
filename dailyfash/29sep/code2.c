
#include<stdio.h>

 void main() {
 
	 char ch1,ch2;
	 printf("Enter the 2 character : ");
	 scanf("%c",&ch1);
	 scanf(" %c",&ch2);


	 char *store1 = &ch1;
	 char *store2 = &ch2;

	 store1 = store1 + 1;
	 store2 = store2 + 1;

	 printf("%c\n",*store1);
	 printf("%c\n",*store2);

 }
