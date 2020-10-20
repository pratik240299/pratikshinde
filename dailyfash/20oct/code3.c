
#include<stdio.h>

 int div = 0,sum = 0;
 void Neon_num(int num) {
 
	 int squ = num * num;

	 for(int i = squ; i != 0; i = i / 10) {
	 
		 div = i % 10;
		 sum = sum + div;
	 }
	 if(sum == num)
		 printf("%d is neon number\n",num);
	 else 
		 printf("%d is not neon number\n",num);
 } 

 void main() {
 
	 int input;
	 printf("Enter the number : ");
	 scanf("%d",&input);

	 Neon_num(input);
 }

/*
 * Enter the number : 9
   9 is neon number
 */
