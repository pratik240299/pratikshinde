
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the lenght of array : ");
	 scanf("%d",&n);

	 int array1[n],array2[n];
	 printf("Enter the element of array : ");

	 for(int i = 0 ; i < n; i++) {
	 
		 scanf("%d",&array1[i]);
	 }
	 printf("Addres of array1 : ");
	 for(int i = 0; i < n; i++) {
	 
		 array2[i] = printf("%p ",&array1[i]);
	 }
	 printf("%d",array2[0]);
	 printf("\n");
 }

/*
Enter the lenght of array : 4
Enter the element of array : 23 67 13 90
Addres of array1 : 0x7ffc8eef1910 0x7ffc8eef1914 0x7ffc8eef1918 0x7ffc8eef191c

*/
