
#include<stdio.h>

 void main() {
 
	 int year;
	 printf("Enter the year: ");
	 scanf("%d",&year);

	 if(year % 4 == 0 || year % 400 == 0)
		 printf("%d is leap year\n",year);
	 else
		 printf("%d is not leap year\n",year);
 }

/*
 *
 * Enter the year: 2004
   2004 is leap year
 */
