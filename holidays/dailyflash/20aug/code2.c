
#include<stdio.h>

 void main() {
 
	 int amount , timeInYear;
	 double rate;
	 printf("Enter amount , rate , timeInyear : ");
	 scanf("%d %lf %d",&amount,&rate,&timeInYear);

	 double simpleInterest = (amount * rate * timeInYear) / 100;
	 printf("simpleInterest = %lf\n",simpleInterest);

 }

/*
 *
 * Enter amount , rate , timeInyear : 5000 6.5 2
   simpleInterest = 650.000000
 */
