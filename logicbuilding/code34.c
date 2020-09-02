
#include<stdio.h>

 void main() {
 
	 int num, rem = 0, sum = 0, mult = 1;
	 printf("Enter the number : ");
	 scanf("%d",&num);

	 for(num; num != 0; num = num / 10) {
	 
		 rem = num % 10;
		 if(rem % 2 == 0)
			 mult = mult * rem;
		 else 
			 sum = sum + rem;
	 }
	 printf("sum = %d\n",sum);
	 printf("multiplication = %d\n",mult);
 }

/*
 *
 * Enter the number : 976132
sum = 20
multiplication = 12
 */
