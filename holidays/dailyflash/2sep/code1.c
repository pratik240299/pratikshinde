
#include<stdio.h>

 void main() {
 
	 int num1,num2;
	 printf("Min of sereis : ");
	 scanf("%d",&num1);
	 printf("Max of sereis : ");
	 scanf("%d",&num2);

	 for(num1; num1 <= num2; num1++) {
	 
		 if(num1 % 2 == 0)
			 printf("%d,",num1);
	 }
	 printf("\n");
 }

/*
 *
Min of sereis : 4
Max of sereis : 60
4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,

*/
