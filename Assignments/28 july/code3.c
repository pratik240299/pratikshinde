
#include<stdio.h>

 void main() {
 
	 int n,num = 4; 
	 printf("Enter the number of rows : ");
	 scanf("%d",&n);

	 for(int i =1; i <= n; i++) {
	 
		 int count =1;
		 for(int j =1; j <= 4; j++) {

			 if(i > count) {
			 
				 count++;
				 printf("  ");
			 }
			 else {
			 
				 printf("%d ",num);
			 }
	         }
		 num--;
		 printf("\n");
	 }

 }

/*
 
4 4 4 4
  3 3 3
    2 2
      1
*/
