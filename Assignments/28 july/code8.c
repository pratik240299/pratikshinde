
#include<stdio.h>

 void main() {
 
	 int n,num = 1; 
	 printf("Enter the number: ");
	 scanf("%d",&n);

	 for(int i = 1; i <= n; i++) {
	 
		 for(int j =1; j <= 4; j++) {
		 
			 if(i + j <= i4) {
			 
				 printf("  ");
			 }
			 else {
			 
				 printf("%d ",num);
				 num++;
			 }
		 }
		 printf("\n");

	 }
 }

/*
Enter the number: 4 
      1
    2 3
  4 5 6
7 8 9 10

*/
