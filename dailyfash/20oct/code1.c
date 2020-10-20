
#include<stdio.h>

 int div1 = 0,div2 = 0,count = 0,store = 0;
 void arm_str(int num) {
 
	 for(int i = num; i != 0; i = i / 10) {
	 
		 div1 = i % 10;
		 count++; 
	 }
	 for(int j = num; j != 0; j = j / 10) {
	 
		 div2 = j % 10;
		 int mult = 1;
		 for(int k = 1; k <= count; k++) {
		 
			 mult = mult * div2;
		 }
		 store = store + mult;
	 }
	 if(store == num)
		 printf("%d is armstrong number\n",num);
	 else 
		 printf("%d is not armstrong number\n",num);
 }

 void main() {
 
	 int input;
	 printf("Enter the number : ");
	 scanf("%d",&input);

	 arm_str(input);
 }

/*
 * Enter the number : 153
   153 is armstrong number
*/
