
#include<stdio.h>

 void main() {
 
	 int num[10] = {2,5,3,7,8,1,4,6,9,0};
	 int new;
	 for(int i = 0; i < 10; i++) {
	 
		 for(int j = i + 1; j < 10; j++) {
		 
			 if(num[i] > num[j]) {
			 
				 new = num[i];
				 num[i] = num[j];
				 num[j] = new;
			 }
		 }
	 }
	 printf("Sort of array : ");
	 for(int i = 0; i < 10; i++) {
	 
		 printf("%d ",num[i]);
	 }
	 printf("\n");
 }

/*
 *
 * Sort of array : 0 1 2 3 4 5 6 7 8 9
 */
