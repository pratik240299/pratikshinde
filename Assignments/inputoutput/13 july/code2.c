
#include<stdio.h>

 void main() {
 
	int Hours;
        int Minutes;
	int totaltime;

	printf("Enter Hours: ");
	scanf("%d",&Hours);

	printf("Enter Minutes: ");
	scanf("%d",&Minutes);

	totaltime= Hours*60 + Minutes;
	printf("Total Minutes:%d\n",totaltime);

 }

//Enter Hours: 2
//Enter Minutes: 30
//Total Minutes:150

