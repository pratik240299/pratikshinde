
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int num[n];
	 printf("Enter the element in integer array : ");
	 
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&num[i]);
	 }
	 printf("Element in integer array :  ");
	 for(int j = 0; j < n; j++) {
	 
		 printf("%d ",num[j]);
	 }
	 printf("\nsize of array : %ld\n",sizeof (num));
	 printf("address of array : %p\n",&num);
	 
	 char ch[n];
	 printf("Enter the element in character array : \n");
	 
	 for(int i = 0; i < n; i++) {
	 
		 scanf(" %c",&ch[i]);
	 }
	 printf("Element in character array :  ");
	 for(int j = 0; j < n; j++) {
	 
		 printf("%c ",ch[j]);
	 }
	 printf("\nsize of array : %ld\n",sizeof (ch));
	 printf("address of array : %p",&ch);
	 
	 float new[n];
	 printf("\nEnter the element in float array : ");
	 
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%f",&new[i]);
	 }
	 printf("Element in float array :  ");
	 for(int j = 0; j < n; j++) {
	 
		 printf("%f ",new[j]);
	 }
	 printf("\nsize of array :%ld\n",sizeof (new));
	 printf("address of array : %p\n",&new);
 }

/*
 *
Enter the size of array : 4
Enter the element in integer array : 2 3 4 5
Element in integer array :  2 3 4 5
size of array : 16
address of array : 0x7ffe2c3bf970
Enter the element in character array :
a
d
f
d
Element in character array :  a d f d
size of array : 4
address of array : 0x7ffe2c3bf960
Enter the element in float array : 34.5 67.8 65.2 54.3
Element in float array :  34.500000 67.800003 65.199997 54.299999
size of array :16
address of array : 0x7ffe2c3bf940


	
*/	 
		
