
#include<stdio.h>

 void main() {
 
	 int num ,rem = 0;
	 printf("Enter the number : ");
	 scanf("%d",&num);

	 for(num; num != 0; num = num / 10) {
	 
		 rem = num % 10;
		 switch(rem) {
		 
			 case 1:
				 printf("One ");
				 break;
			 case 2:
				 printf("Two ");
				 break;
			 case 3:
				 printf("Three ");
				 break;
			 case 4:
				 printf("Four ");
				 break;
			 case 5:
				 printf("Five ");
				 break;
			 case 6:
				 printf("Six ");
				 break;
			 case 7:
				 printf("Seven ");
				 break;
			 case 8:
				 printf("Eight ");
				 break;
			 case 9:
				 printf("Nine ");
				 break;
		 }
	 }
	 printf("\n");
 }

/*
 *
 * Enter the number : 456735
   Five Three Seven Six Five Four
 */
