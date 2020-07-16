
#include<stdio.h>

 void main() {
 
 	int value;
	int hours,min;

	printf("enter the min: ");
	scanf("%d",&value);

	hours=value/60;
        min=value%60;


	printf("%d Hours,%d Mintues\n",hours,min);
 }

//enter the min: 452
//7 Hours,32 Mintues

