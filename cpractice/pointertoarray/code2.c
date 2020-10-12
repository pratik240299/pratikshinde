
#include<stdio.h>

 void main() {
 
	 int arr1[5] = {10,20,30,40,50};
	 int arr2[5] = {60,70,80,90,100};

	 int (*ptr1)[5] = &arr1;
	 int (*ptr2)[5] = &arr2;

	 for(int i = 0; i < 1; i++) {
	 
		 for(int j = 0; j < 5; j++) {
		 
			 printf("%d\n",*(*(ptr1+i)+j));
		 }
	 }
	 for(int i = 0; i < 1; i++) {
		 
		 for(int j = 0; j < 5; j++) {
		 
			 printf("%d\n",*(*(ptr2+i)+j));
		 }
	 }
 }

/*
10
20
30
40
50
60
70
80
90

*/
