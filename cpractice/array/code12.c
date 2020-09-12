
#include<stdio.h>

 void main() {
 
	 int num,min = 0;
	 printf("Enter the size of array :");
	 scanf("%d",&num);

	 printf("Enter array element : ");
	 int number[num];

	 for(int i = 0; i < num; i++) {
	 
		 scanf("%d",&number[i]);
	 }
	 printf("even number in arrays : ");
	 for(int i = 0; i < num; i++) {
	 
		 if(number[i] % 2 == 0)
			 printf("%d ",number[i]);
	 }
	 printf("\n");
 }


/*
 *
Enter the size of array :5
Enter array element : 12 35 46 56 89
even number in arrays : 12 46 56 


   */
