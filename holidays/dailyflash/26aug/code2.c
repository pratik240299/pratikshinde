
#include<stdio.h>
  
 void main() {

	 int num;
	 printf("Enter the number : ");
	 scanf("%d",&num);

	 for(int i = 1; i <= num; i++) {
	 
		 printf("The cube of %d is %d\n",i,i*i*i);
	 }
 

 }


/*
 *
Enter the number : 20
The cube of 1 is 1
The cube of 2 is 8
The cube of 3 is 27
The cube of 4 is 64
The cube of 5 is 125
The cube of 6 is 216
The cube of 7 is 343
The cube of 8 is 512
The cube of 9 is 729
The cube of 10 is 1000
The cube of 11 is 1331
The cube of 12 is 1728
The cube of 13 is 2197
The cube of 14 is 2744
The cube of 15 is 3375
The cube of 16 is 4096
The cube of 17 is 4913
The cube of 18 is 5832
The cube of 19 is 6859
The cube of 20 is 8000


 */
