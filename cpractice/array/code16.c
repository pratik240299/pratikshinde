
#include<stdio.h>

 void main() {
 
	 int num1[5],num2[5];

	 for(int i = 0; i < 5; i++) {
	 
		 scanf("%d",&num1[i]);
	 }
	 printf("\n");
	 for(int i = 0; i < 5; i++) {
	 
		 num2[i] = num1[i];
		 printf("%d ",num2[i]);
	 }
 }
