
#include<stdio.h>

 void main() {
 
	 int n,new;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int num[n];
	 printf("Enter the element in array : ");
	 
	 for(int i = 0; i < n ; i++) {
	 
		 scanf("%d",&num[i]);
	 }

	 for(int i = 0; i < n ; i++) {
	 
		 for(int j = i + 1; j < n; j++) {
		 
			 if(num[i] > num[j]) {
			 
				 new = num[i];
				 num[i] = num[j];
				 num[j] = new;

			 }
		 }
	 }
	 printf("Ascending order : ");
	 for(int i = 0; i < n; i++) {
	 
		 printf("%d ",num[i]);
	 }
 }
 
