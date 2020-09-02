#include<stdio.h>

 void main() {
 
	 int num;
	 printf("Enter the number : ");
	 scanf("%d",&num);
	 int rem = 0,count = 0,store = 0; 

	 for(num; num != 0; num = num / 10) {
	 
		 rem = num % 10;
		 count++;
		 if(count == 1)
			 store = rem;
	 }
	 printf("%d\n",rem*10 + store);
 }

/*
 *
 * Enter the number : 8785875
   85
*/
