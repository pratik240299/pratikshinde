
#include<stdio.h>

 void main() {
 
	 int days ;
	 printf("Enter the integer between 0 to 6: ");
	 scanf("%d",&days);

	 switch(days) {
	 
		 case 0:
			 printf("Monday\n");
			 break;
		 case 1:
			 printf("Tuesday\n");
			 break;
		 case 2:
			 printf("Wednesday\n");
			 break;
		 case 3:
			 printf("Thurday\n");
			 break;
		 case 4:
			 printf("Friday\n");
			 break;
		 case 5:
			 printf("Saturday\n");
			 break;
		 case 6:
			 printf("Sunday\n");
			 break;
	 }

 }

/*
 *
 * Enter the integer between 0 to 6: 2
   Wednesday
*/
