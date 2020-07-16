
#include<stdio.h>
  
 void main() {
 
 	int num;

	printf("enter the number between 0 to 5: ");
	scanf("%d",&num);

	switch(num) {
	
		case 0:
			printf("Zero\n");
			break;
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
			break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("Four\n");
			break;
		case 5:
			printf("Five\n");
			break;
		default:
			printf("enter number is greater than 5\n");
			break;
	
	}
 
 }
