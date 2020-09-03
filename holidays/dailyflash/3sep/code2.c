
#include<stdio.h>

 void main() {
 
	 int num1,num2;
	 printf("Start number : ");
	 scanf("%d",&num1);
	 printf("End number : ");
	 scanf("%d",&num2);

	 for(num1; num1 <= num2; num1++) {
	 
		 int fac = 1;
		 for(int i = 1; i <= num1; i++){
		 
			 fac = fac * i;
		 }
		 printf("Factorial of %d = %d\n",num1,fac);
	 }
 }

/*
 *
Start number : 1
End number : 5
Factorial of 1 = 1
Factorial of 2 = 2
Factorial of 3 = 6
Factorial of 4 = 24
Factorial of 5 = 120

*/
