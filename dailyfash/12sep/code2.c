
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 printf("Enter the numbers in array : \n");
	 int num [n];
	 
	 for(int i = 0; i < n; i++) {
	 
		 scanf(" %d",&num[i]);
	 }
	 printf("Prime number in array is : ");
	 for(int i = 0; i < n; i++) {
	 
		 int count = 0; 
		 for(int j = 1; j <= num[i]; j++) {
		 
			 if(num[i] % j == 0)
				 count++;
		 }
		 if(count == 2)
			 printf("%d ",num[i]);
	 }
	 printf("\n");
 }

/*
 *
 * Enter the size of array : 4
Enter the numbers in array :
11
15
31
50
Prime number in array is : 11 31

