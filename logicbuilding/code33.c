
#include<stdio.h>

 void main() {
 
	 int num;
	 printf("Enter the number : ");
	 scanf("%d",&num);
	 int var = num, rem = 0, rev = 0;

	 while(num != 0) {
	 
		 rem = num % 10;
		 rev = rev * 10 + rem;
		 num = num / 10;
	 }
	 printf("%d\n",rev);
	 if(var == rev)
		 printf("it is paranormal number\n");
 }
