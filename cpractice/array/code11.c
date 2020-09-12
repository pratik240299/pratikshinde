
#include<stdio.h>

 void main() {
 
	 int num,max = 0;
	 printf("Enter the size of array :");
	 scanf("%d",&num);

	 printf("Enter array element : ");
	 int number[num];

	 for(int i = 0; i < num; i++) {
	 
		 scanf("%d",&number[i]);
	 }
	 for(int i = 0; i < num; i++) {
	 
		 if(number[i] > max)
			 max = number[i];
	 }
	 printf("maxium number between array is : %d\n",max);
 }


/*
 *
 * Enter the size of array :5
   Enter array element : 12 34 67 567 986
   maxium number between array is : 986

   */
