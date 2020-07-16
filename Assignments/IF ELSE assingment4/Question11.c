
#include<stdio.h>

 void main() {
  
	 int number1,number2;
	 printf("enter two integers:");               
	 scanf("%d %d",&number1,&number2);                    // number1=12 , number2=13

	 if(number1>=number2) {                              // false
	 	if(number1 == number2) {
			printf("%d=%d\n",number1,number2);
		}
		else{
			printf("%d>%d\n",number1,number2);

		}

	 }
	 else{                                               //true
	 	printf("%d<%d\n",number1,number2);           // 12<13
	 }
 
 }
