
#include<stdio.h>

 void main() {
 
	int dist, time, vel;
	printf("Distance : ");
	scanf("%d",&dist);
	printf("Time : ");
	scanf("%d",&time);

	vel = dist / time;
	printf("The velocity of particle roaming in space is %dm/s\n",vel);

 }

/*
 *
Distance : 100
Time : 20
The velocity of particle roaming in space is 5m/s

*/
