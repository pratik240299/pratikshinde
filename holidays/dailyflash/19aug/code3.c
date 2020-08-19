
#include<stdio.h>

 void main() {
 
	 int month;
	 printf("Enter the number of month : ");
	 scanf("%d",&month);

	 switch(month) {
	 
		 case 1:
			 printf("january is 31 days\n");
			 break;
		 case 2:
			 printf("february is 28 or 29 days\n");
			 break;
		 case 3:
			 printf("march is 31 days\n");
			 break;
		 case 4:
			 printf("april is 30 days\n");
			 break;
		 case 5:
			 printf("may is 31 days\n");
			 break;
		 case 6:
			 printf("june is 30 days\n");
			 break;
		 case 7:
			 printf("july is 31 days\n");
			 break;
		 case 8:
			 printf("august is 31 days\n");
			 break;
		 case 9:
			 printf("september is 30 days\n");
			 break;
		 case 10:
			 printf("october is 31 days\n");
			 break;
		 case 11:
			 printf("november is 30 days\n");
			 break;
		 case 12:
			 printf("december is 31 days\n");
			 break;
	 }
 }

/*
 *
 * Enter the number of month : 4
   april is 30 days
*/
