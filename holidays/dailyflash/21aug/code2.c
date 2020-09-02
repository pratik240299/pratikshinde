
#include<stdio.h>

 void main() {
 
	 int unit ;
	 double bill;
	 printf("Enter the unit : ");
	 scanf("%d",&unit);

         for(int i = 1; i <= unit; i++) {
	 
		 if(i <= 50)
			 bill = bill + 0.50;

		 else if(i > 50 && i <= 150)
			 bill = bill + 0.75;

		 else if(i > 150 && i < 250)
			 bill = bill + 1.20;

		 else
			 bill = bill + 1.50; 

	 }
	 printf("total bill = %lf\n",bill);
 }

/*
 *
 * Enter the unit : 450
   total bill = 520.300000
 */
