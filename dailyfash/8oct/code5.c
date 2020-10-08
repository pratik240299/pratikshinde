
#include<stdio.h>

 void main() {
 
	 int num;
	 printf("Enter the number : ");
	 scanf("%d",&num);

	 int squ = num*num;
	 int cube = num*num*num;

	 int *iptr1 = &squ;
	 int *iptr2 = &cube;

	 int* arrptr[2] = {iptr1,iptr2};
 }
