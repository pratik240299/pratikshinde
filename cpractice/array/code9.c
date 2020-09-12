
#include<stdio.h>

 void main() {

	int num ;
        printf("Enetr the size of arry : ");
	scanf("%d",&num);	
	int stud_age[num];
	
	printf("Enter the array element : ");
	for(int i = 0; i < num; i++) {
	
		scanf("%d",&stud_age[i]);
	}
	printf("array elements : ");
	for(int i = 0; i < num; i++) {
	
		printf("%d ",stud_age[i]);
	}


 }


/*
 *
 *
Enetr the size of arry : 8
Enter the array element : 1 2 3 4 5 6 7 8 
array elements : 1 2 3 4 5 6 7 8

 */
