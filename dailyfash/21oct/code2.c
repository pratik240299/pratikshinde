
#include<stdio.h>

 int sum = 0;

 int angle(int x) {
 
	 sum = sum + x;

	 return sum;
 }

 void main() {
 
	 int arr[3];
	 int sum;

	 printf("Enter the angles : ");
	 for(int i = 0; i < 3; i++) {
	 
		 scanf("%d",&arr[i]);
	 }

	 for(int i = 0; i < 3; i++) {
	 
		 sum = angle(arr[i]);
	 }
	 if(sum == 180)
		 printf("it is traingle\n");
	 else
		 printf("it is not traingle\n");

 }

/*
 * Enter the angles : 100 20 60
   it is traingle
 */
