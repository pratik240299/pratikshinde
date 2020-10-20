#include<stdio.h>

 void prime_num(int num) {
 
	 int count = 0;
	 for(int i = 1; i <= num; i++) {
	 
		 if(num % i == 0)
			 count++;
	 }
	 if(count == 2 || num == 1)
		printf("%d is prime number\n",num);
	 else 
		printf("%d is not prime number\n",num);
 }


 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int arr[n];
	 printf("Enter the element in array : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr[i]);
	 }
	 for(int i = 0; i < n; i++) {
	 
		 prime_num(arr[i]);
	 }
 }

/*
 * Enter the size of array : 5
Enter the element in array : 1 2 3 4 5
1 is prime number
2 is prime number
3 is prime number
4 is not prime number
5 is prime number

*/
