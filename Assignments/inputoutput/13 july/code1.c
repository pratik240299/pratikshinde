
#include<stdio.h>

 void main() {
 
 	int radius;
	float area;
	float circumference;	

	printf("enter the radius: ");
	scanf("%d",&radius);

	area= 3.14*radius*radius;
	printf("area of circle: %.2f\n",area);

        circumference= 2*3.14*radius;
	printf("circumference of circle: %.2f\n",circumference);
 
 
 }

//enter the radius: 4
//area of circle: 50.24
//circumference of circle: 25.12

