
#include<stdio.h>
 
 void main() {
 
 	int month;

 	printf("Enter the month number: ");
	scanf("%d",&month);

	switch(month) {
	
		case 1:
			printf("january has 31 days\n");
			break;
		case 2:
			printf("february has 28 days\n");
			break;
		case 3:
			printf("march has 31 days\n");
			break;
		case 4:
			printf("april has 30 days\n");
			break;
		case 5:
			printf("may has 31 days\n");
			break;
		case 6:
			printf("june has 30 days\n");
			break;
		case 7:
			printf("july has 31 days\n");
			break;
		case 8:
			printf("august has 31 days\n");
			break;
		case 9:
			printf("september has 30 days\n");
			break;
		case 10:
			printf("october has 31 days\n");
			break;
		case 11:
			printf("november has 30 days\n");
			break;
		case 12:
			printf("december has 31 days\n");
			break;
		default:
			printf("not such month exist\n");
			break;	
	
	}
 
 }
