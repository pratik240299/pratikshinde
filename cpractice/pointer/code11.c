
#include<stdio.h>

void main() {

	int arr1[] = {10,20,30,40,50};
	int arr2[] = {50,60,70};

	int *iptr1 = arr1;
	int *iptr2 = &arr1;
	int *iptr3 = arr2;
	printf("%p\n",iptr1);
	printf("%p\n",iptr2);
	printf("%p\n",iptr3);

}

/*
 * 0x7fff38d555b0
   0x7fff38d555b0
 */
