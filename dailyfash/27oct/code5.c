
#include<stdio.h>
 
 float add = 0,output = 0;
 float sum(float x) {
 
	 add = add + x;
	 return add;
 }
 void toogle(char ch) {
 
	 if(ch >= 65 && ch <= 90)
		 printf("%c ",ch+32);
	 else if(ch >= 97 && ch <= 122)
		 printf("%c ",ch-32);
 }

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 float farr[n];
	 printf("Enter the float array : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%f",&farr[i]);
	 }
	 char carr[n];
	 printf("Enter the character array : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf(" %c",&carr[i]);
	 }
	 float (*floatarr)(float) = sum;
	 for(int i = 0; i < n; i++) {
	 
	 	output = floatarr(farr[i]);
	 }
	 printf("Sum of number is %f\n",output);

	 printf("Character array output is : ");
	 void (*chararr)(char) = toogle;
	 for(int i = 0; i < n; i++) {
	 
		 chararr(carr[i]);
	 }
	 printf("\n");
 }

/*
 *
Enter the size of array : 4
Enter the float array : 12.3 67.4 87.4 98.0
Enter the character array : P r a T
Sum of number is 265.100006
Character array output is : p R A t

*/
