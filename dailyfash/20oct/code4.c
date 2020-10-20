
#include<stdio.h>

 int div = 0,rev = 0;
 void palin_num(int num) {
 
	 for(int i = num; i != 0; i = i / 10) {
	 
		 div = i % 10;
		 rev = rev*10 + div;
	 }
	 if(rev == num)
		 printf("%d is palindrome number\n",num);
	 else 
		 printf("%d is not palindrome number\n",num);
 }
 
 void main() {
 
	 int input;
	 printf("Enter the number : ");
	 scanf("%d",&input);

	 palin_num(input);
 }

/*
 * Enter the number : 121
   121 is palindrome number
 */
