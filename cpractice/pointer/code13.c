
#include<stdio.h>

 void main() {
 
	 int arr1[] = {10,20,30,40,50};
	 int arr2[] = {60,70,80,90,100};
	 int arr3[] = {110,120,130};

	 /*
	 printf("virtual : \n");
	 printf("arr[0] = %p\n",arr1);
	 printf("arr[4] = %p\n",&arr1[4]);
	 printf("%p\n",arr2);
	 printf("%p\n",arr3);
	 
	 printf("Physical : \n");
	 printf("%p\n",&arr1);
	 printf("%p\n",&arr2);
	 printf("%p\n",&arr3);

	 */
	 
	 printf("%p\n",arr1);
	 printf("%p\n",&arr1);

	 int *iptr = arr1 + 1;
	 int *iptr2 = &arr1 + 4;

	 printf("%p\n",iptr);
	 printf("%p\n",iptr2);
	 printf("\n");
	 printf("%d\n",*iptr);
	 printf("%d\n",*iptr2);
	 
 }
