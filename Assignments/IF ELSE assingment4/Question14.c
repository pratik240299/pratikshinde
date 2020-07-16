#include<stdio.h>

 void main() {
 
 int num;
 printf("Enter the number:");
 scanf("%d",&num);

 if(num>25 && num<50) {                                         // false
 	printf("%d belongs to the range 25 to 50\n",num);
 }
 else{                                                             //true
 	printf("%d doesn't belongs to range 25 to 50\n",num);
 }

 
 }
