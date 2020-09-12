
#include<stdio.h>

 void main() {
 
	 printf("Enter the number in array : ");
	 double num [7],sum = 0;
	 
	 for(int i = 0; i < 7; i++) {
	 
		 scanf(" %lf",&num[i]);
	 }
	 for(int i = 0; i < 7; i++) {
	 
		 sum = sum + num[i];
	 }
	 double mean = sum / 7;
	 printf("Mean = %lf\n",mean);

 }

/*
 *
 *
 * Enter the number in array : 1 34 54 43 12 67 78
   Mean = 41.285714

   */
