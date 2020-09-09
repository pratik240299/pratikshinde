
#include<stdio.h>
 
 void main() {
 
	 int hours;
	 printf("Enter the hours : ");
	 scanf("%d",&hours);

	 int sec = hours * 60 * 60;
	 printf("%d hours is equal to %d seconds\n",hours,sec);
 }

/*
 *
 * Enter the hours : 1
   1 hours is equal to 3600 seconds
 */

