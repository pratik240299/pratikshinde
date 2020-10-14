
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 float farr[n];
	 printf("Enter the element in array : ");

	 for(int i = 0; i < n; i++) {
	 
		 scanf("%f",&farr[i]);
	 }

	 void *vptr = farr;

	 printf("Output : \n");
	 for(int i = 0; i < n; i++) {
	 
		 vptr = farr + i;
		 printf("%0.2f\n",*(float*)vptr);
	 }
 }

/*
Enter the size of array : 4
Enter the element in array : 23.4 56.7 89.2 579.3
Output :
23.40
56.70
89.20
579.30

*/
