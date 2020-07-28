
#include<stdio.h>

 void main() {
 
	 int n,num = 1;
	 printf("Enter the number of rows: ");
	 scanf("%d",&n);

	 for(int i =1; i <= n; i++) {
	 
		 for(int j =1; j <= num ; j++) {
		 
			 printf("$ ");

		 }
		 num= num + 2;
		 printf("\n");
	 }
 }

/*
 *
Enter the number of rows: 5
$
$ $ $
$ $ $ $ $
$ $ $ $ $ $ $
$ $ $ $ $ $ $ $ $

*/
