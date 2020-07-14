
#include<stdio.h>

 void main () {
 
 	int x,y;
	int choice;

	printf("enter x and y value:");
	scanf("%d %d",&x,&y);

	printf("enter your choice:\n");
	printf("1:add\n");
	printf("2:sub\n");
	printf("3:mult\n");
	printf("4:div\n");
	scanf("%d",&choice);
	switch(choice) {

		case 1:
			printf("add=%d\n",x+y);
			break;
		case 2:
			printf("sub=%d\n",x-y);
			break;
		case 3:
			printf("mult=%d\n",x*y);
			break;
		case 4:
			printf("div=%d\n",x/y);
			break;
		default :
			printf("wrong choice\n");
			break;
	
	}
		printf("out of switch\n");
 }
