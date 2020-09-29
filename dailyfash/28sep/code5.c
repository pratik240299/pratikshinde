
#include<stdio.h>

 void main() {
 
	 int n,count = 0;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 if(n % 2 == 0) {

		 printf("Enter the element in array : ");
		 int sum = 0;
		 for(int j = 1; j <= n; j++) {
	
		 	int arr[n];
		 	int i = 0;
		 	scanf("%d",&arr[i]);

		 	if(arr[i] % 2 != 0) {
			
				sum = sum + arr[i];
				count++;
		       	}
		 	i++;
		 }
		 int avg = sum / count;
		 printf("avg = %d\n",avg);
	 }
 }

/*
Enter the size of array : 4
Enter the element in array : 1 2 3 4
avg = 2

*/
