
#include<stdio.h>

 void main() {
 
 int number=10;

 if(number!=0 && number>0) {                                // true
 	printf("%d is a positive no\n",number);

	number=5;                                           // latest value of number is 5
 }
 if(number<0) {                                               // false
 	printf("%d\n is a negative no\n",number);
	number=0;
 }
 if(number==0) {                                               //false
 	printf("number is zero\n");
	number=15;

 }
 if(number%4==0) {                                             //false
 	printf("%d is divisible by 4\n",number);
 }
 
 }
