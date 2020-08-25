
#include<stdio.h>

 void main() {
 
	 int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
	 int sum = 0;
	 printf("Enter the 10 number : ");
	 scanf("%d %d %d %d %d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10);
	 
	 sum = num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;

         float sum1 = sum;
	 float avg = (sum1 / 10);
	 printf("the sum of 10 entered number is %0.0f\n",sum1);
	 printf("the avgrage of 10 entered number is %0.2f\n",avg);
	 
 }

/*
 *
 * Enter the 10 number : 1 2 3 4 5 6 7 8 9 10
   the sum of 10 entered number is 55
   the avgrage of 10 entered number is 5.50
 */
