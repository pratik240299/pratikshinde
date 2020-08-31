
#include<stdio.h>

 void main() {
 
	 int num;
	 printf("Enter the number : ");
	 scanf("%d",&num);

	 for(int i = 2; i < num; i++) {
	 
		 if(num % i == 0) {
		 
			 printf("%d ",i);
		 }
	 }
	 printf("\n");
 }

/*
 *

Enter the number : 24
2 3 4 6 8 12


*/
