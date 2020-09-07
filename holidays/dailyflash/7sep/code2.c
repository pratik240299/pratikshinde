
#include<stdio.h>

 void main() {
 
	 float mass, velocity;
	 printf("Enter the  Mass : ");
	 scanf("%f",&mass);
	 printf("Enetr the velocity : ");
	 scanf("%f",&velocity);

	 float kine = 0.5 * mass * velocity * velocity;
	 printf("Knetic Enenrgy of object is : %0.2f\n",kine);

 }

/*
 *
Enter the  Mass : 53
Enetr the velocity : 5
Knetic Enenrgy of object is : 662.50

*/
