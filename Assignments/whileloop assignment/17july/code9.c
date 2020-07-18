
#include<stdio.h>

 void main() {
 
	int num;

	printf("Enter No of days to complete the assignment: ");
	scanf("%d",&num);

	while(num>=1) {
	
		printf("%d days remaining\n",num);
		num--;	
	}

	printf("0 days assignment is overdue\n");
 
 }

//Enter No of days to complete the assignment: 7
//7 days remaining
//6 days remaining
//5 days remaining
//4 days remaining
//3 days remaining
//2 days remaining
//1 days remaining
//0 days assignment is overdue

