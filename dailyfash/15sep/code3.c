
#include<stdio.h>

 void main() {
 
	 int n,count = 0;
	 printf("Enter size of array : ");
	 scanf("%d",&n);

	 int num[n];
	 printf("Enter the element in array : ");

	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&num[i]);
	 }
	 for(int j = 0; j < n; j++) {
	 
		 int rem = 0;
		 for(int new = num[j]; new != 0; new = new / 10) {
		 
			 rem = new % 10;
			 if(rem == 1)
				 count++;
		 }
	 }
	 printf("Occurance of 1 as in array is : %d\n",count++);

 }

/*
 *
Enter size of array : 9
Enter the element in array : 121 3 45 21 61 11 12 22 4
Occurance of 1 as in array is : 7

*/
