
#include<stdio.h>
  
 void main() {

	 int num;
	 printf("Enter the number : ");
	 scanf("%d",&num);

	 for(int i = 1; i <= num; i++) {
	 
		 printf("The square of %d is %d\n",i,i*i);
	 }
 

 }


/*
 *
Enter the number : 10
The square of 1 is 1
The square of 2 is 4
The square of 3 is 9
The square of 4 is 16
The square of 5 is 25
The square of 6 is 36
The square of 7 is 49
The square of 8 is 64
The square of 9 is 81
The square of 10 is 100
 */