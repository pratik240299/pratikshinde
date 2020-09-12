
#include<stdio.h>

 void main() {
 
	int stud_age[5];
	
	printf("Enter the array element : ");
	for(int i = 0; i < 5; i++) {
	
		scanf("%d",&stud_age[i]);
	}
	printf("array elements : ");
	for(int i = 0; i < 5; i++) {
	
		printf("%d ",stud_age[i]);
	}


 }


/*
 *
 * Enter the array element : 10 20 30 40 50
   array elements : 10 20 30 40 50

 */
