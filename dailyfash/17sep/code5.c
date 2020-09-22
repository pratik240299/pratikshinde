
#include<stdio.h>

 void main() {
 

	 int n,z = 0,x;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int num1[n];
	 int num2[z];
	 printf("Enter the element in array : ");

	 for(int i = 0; i < n; i++) {
	
		 scanf("%d",&num1[i]);
	 }
	 num2[0] = num1[1]; 
	 for(int i = 0; i < n; i++) {
	 
		 x = i + 1;
		 if(num1[x] == num1[i]) {

			 continue;
		 }
		 else {
		 
			 z++;
			 num2[z] = num1[x];
		 }
	 }
	 printf("Number :");
	 for(int i = 0; i < z; i++) {
	 
		 printf("%d ",num2[i]);
	 }
	 


 }
