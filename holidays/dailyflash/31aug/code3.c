
#include<stdio.h>

 void main() {
 
	 int num;
	 printf("Enter the number : ");
	 scanf("%d",&num);

	 for(int i = 1; i <= num; i++) {
	 
		 printf("cube of %d : %d and square of %d : %d\n",i,i*i*i,i,i*i);
	 }
 }

/*
 *
  
Enter the number : 10
cube of 1 : 1 and square of 1 : 1
cube of 2 : 8 and square of 2 : 4
cube of 3 : 27 and square of 3 : 9
cube of 4 : 64 and square of 4 : 16
cube of 5 : 125 and square of 5 : 25
cube of 6 : 216 and square of 6 : 36
cube of 7 : 343 and square of 7 : 49
cube of 8 : 512 and square of 8 : 64
cube of 9 : 729 and square of 9 : 81
cube of 10 : 1000 and square of 10 : 100

*/
