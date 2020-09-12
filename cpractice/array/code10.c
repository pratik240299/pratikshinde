
#include<stdio.h>

 void main() {

	int num,sum = 0;
        printf("Enter the size of arry : ");
	scanf("%d",&num);	
	int stud_age[num];
	
	printf("Enter the array element :\n");
	for(int i = 0; i < num; i++) {
	
		scanf("%d",&stud_age[i]);
	}
	printf("Sum of array element = ");
	for(int i = 0; i < num; i++) {
	
		sum = sum + stud_age[i];
	}
	printf("%d\n",sum);


 }


/*
 *
 Enter the size of arry : 10
Enter the array element :
1
2
3
4
5
6
7
8
9
10
Sum of array element = : 55
*


 */
