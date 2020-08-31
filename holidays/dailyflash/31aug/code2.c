
#include<stdio.h>

 void main() {
 
	 int num;
	 printf("Enter the number : ");
	 scanf("%d",&num);

	 for(int i = 1; i <= num; i++) {
	 
		 if(i % 4 == 0 && i % 7 == 0) {
		 
			 printf("%d ",i);
		 }
	 }
	 printf("\n");
 }

/*
 *
 
Enter the number : 100
28 56 84 

*/
