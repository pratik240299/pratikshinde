
#include<stdio.h>

 void main() {
 
	 int n ;
	 printf("Enter the number of rows : ");
	 scanf("%d",&n);

	 for(int i =1; i <= n; i ++) {
	 
		 int num = 0 + i;
		 for(int j =1; j <= 5; j++) {
		 
			 if(i + j <= 5) {
			 
				 printf("  ");
			 }
			 else {
			 
				 printf("%d ",num);
				 num--;

			 }
		 }
		 printf("\n");
	 }
 }

/*
 *
Enter the number of rows : 5
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1

*/

