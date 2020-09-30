
#include<stdio.h>

 void main() {
	
	int input;
	int year = 2015;
        printf("Enter the year : ");
	scanf("%d",&input);

	float sal[] = {10000.00,20000.00,30000.00,40000.00,50000.00,60000.00};

	float *fptr = sal;
	for(int i = 0; i < 5; i++) {
	
		if(input == year + i) {
		
			fptr = fptr + i;
			printf("%f\n",*fptr);
		}
	}

    	

 }

/*
 * Enter the year : 2017
   30000.000000
 */
