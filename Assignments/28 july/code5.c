
#include<stdio.h>

 void main() {
 
	 int n; 
	 printf("Enter the number of rows: ");
	 scanf("%d",&n);

	 char ch1 = 'a', ch2 = 'E'; 
	 for(int i =1; i <= n; i++) {
	 
		 int count = 1;
		 for(int j =1; j <= 4; j++) {
		 
			 if(i > count) {
			 
				 count++;
				 printf("  ");
			 }
			 else if(j % 2 == 0) {
			 
				 printf("%c ",ch1);
				 ch1++;	  
			 }
			 else {
			 
				 printf("%c ",ch2);
				 ch2--;
			 }
		 }
		 printf("\n");

	 }
 }

/*
 
Enter the number of rows: 4
E a D b
  c C d
    B e
      f
*/
