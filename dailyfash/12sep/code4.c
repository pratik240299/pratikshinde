
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 printf("Enter the number in array : \n");
	 int num [n];
	 
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&num[i]);
	 }
	 printf("Element in array : ");
	 for(int i = 0; i < n; i++) {
	 
		 printf("%d ",num[i]);
	 }
 }

/*
 *
Enter the size of array : 5
Enter the number in array :
12
34
56
78
13
Element in array : 12 34 56 78 13
