
#include<stdio.h>

 void main() {
 
	 int n,pan = 0,rem = 0;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int num[n];
	 printf("Enter the elements in array : ");
	 
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&num[i]);
	 }
	 printf("Palindrome number in array is : ");
	 for(int j = 0; j < n; j++) {
	 
		 int new = 0;
		 for(int pan = num[j]; pan != 0; pan = pan / 10) {
		 
			 rem = pan % 10;
			 new = new*10 + rem;
		 }
		 if(new == num[j])
			 printf("%d ",new);
	 }
	 printf("\n");
 
 }

/*
 *
Enter the size of array : 7
Enter the elements in array : 1 3 11 20 50 71 101
Palindrome number in array is : 1 3 11 101

*/
