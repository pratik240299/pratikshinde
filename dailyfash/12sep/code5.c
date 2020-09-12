
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int num[n];
	 printf("Enter the numbers in array : \n");

	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&num[i]);
	 }
	 printf("number divisible by 5 are : ");
	 for(int i = 0; i < n; i++) {
	 
		 if(num[i] % 5 == 0)
			 printf("%d ",num[i]);
	 }


 }

/*
 *
Enter the size of array : 6
Enter the numbers in array :
12
35
60
992
70
20
number divisible by 5 are : 35 60 70 20
