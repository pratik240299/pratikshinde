
#include<stdio.h>
 
 void main() {
 
	 int n;
	 printf("Enter the size of array :");
	 scanf("%d",&n);

	 int num1[n];
	 int num2[n];

	 printf("Enter the element in array1 : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&num1[i]);
	 }
	 printf("Enter the element in array2 : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&num2[i]);
	 }
	 for(int i = 0; i < n; i++) {
	 
		 if(num1[i] == num2[i] * num2[i])
			 printf("1 ");
		 else 
			 printf("-1 ");
	 }
	 printf("\n");
 


 }

/*
Enter the size of array :4
Enter the element in array1 : 16 10 36 12
Enter the element in array2 : 4 2 6 3
1 -1 1 -1

*/
