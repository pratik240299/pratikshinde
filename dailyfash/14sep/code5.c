
#include<stdio.h>

 void main() {
 
	 int n,rem = 0;
	 printf("Enter size of array : ");
	 scanf("%d",&n);

	 int num[n];
	 printf("Enter the array element : ");
	 
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&num[i]);
	 } 
	 for(int j = 0; j < n; j++) {
	 
		 int sum = 0;
		 for(int new = num[i]; new != 0; new = new / 10) {
		 
			 int fac = 1;
			 rem = new % 10;
			 for(int i = 1; i <= rem; i++) {
			 
				 fac = fac * i;
			 }
			 sum = sum + fac;
		 
		 }
		 if(sum == num[i])
			 

	 }
 }
