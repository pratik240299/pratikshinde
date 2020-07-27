
#include<stdio.h>

 void main() {
 
	 int num ;
	 printf("enter the number :");
	 scanf("%d",&num);

	
	 for(int i =1; i <=num; i++ ) {
	 
		 int mult = 1; 
		 for(int j =1; j <= i; j++) {
		 
			 mult = mult * j;
		 }
		 printf("%d  ",mult);
	 }
	 printf("\n");


 }
	
/*

enter the number :5
1  2  6  24  120

*/

