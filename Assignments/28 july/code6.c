
#include<stdio.h>

 void main() {
 
	 int n,num = 1;
	 printf("Enter the number to print its table: ");
	 scanf("%d",&n);
	 for(int i =1; i <= 4; i++) {
	 
		 int count = 1;
		 for(int j =1; j <= 4; j++) {
		 
			 if(i > count) {
			 
				 count++;
				 printf("  ");
			 }
			 else {
			 
				 printf("%d ",n*num);
				 num++;
			 }
		 }
		 printf("\n");
	 }
 }

/*
Enter the number to print its table: 2
2 4 6 8 
  10 12 14 
    16 18 
      20 
*/
