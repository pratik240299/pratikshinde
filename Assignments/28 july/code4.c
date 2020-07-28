
#include<stdio.h>

 void main() {
 
	 int n ,num = 1;
	 printf("Enter thr number of rows: ");
	 scanf("%d",&n);

	 for(int i =1; i <= n; i++) {
	 
		 int count = 1;
		 for(int j =1; j <= 5; j++) {
		 
			 if(i > count ) {
			 
				 count++;
				 printf("  ");
			 }
			 else {
				 printf("%d ",num);
				 num = num + 2;
			 }
		 }
		 printf("\n");
	 }
 }

/*
 *
Enter thr number of rows: 5
1 3 5 7 9 
  11 13 15 17 
    19 21 23 
      25 27 
        29 
 
*/
