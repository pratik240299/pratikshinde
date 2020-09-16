
#include<stdio.h>

 void main() {
 
	 int n,new;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int num[n];
	 printf("Enter the element in array  : ");

	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&num[i]);
	 }
	 for(int i = 0; i < n; i++) {
	 
		 for(int j = i + 1; j < n; j++) {
		 
			 if(num[i] > num[j]) {
			 
				 new = num[i];
				 num[i] = num[j];
				 num[j] = new;
			 }
		 }
	 }
	 printf("first largest  number in array is : %d\n",num[n-1]);
	 printf("second largest  number in array is : %d\n",num[n-2]);

 } 

/*
 *
Enter the size of array : 5
Enter the element in array  : 10 20 15 30 60
first largest  number in array is : 60
second largest  number in array is : 30

