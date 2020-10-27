
#include<stdio.h>


 void perfectsqu(int num) {
 
	 for(int i = 1; i <= num; i++) {
	 
		 if(num == i * i)
			 printf("%d ",num);
	 }
 } 

 void main() {
 
	 int n;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);
	 int arr[n];
	 printf("Enter the element in array : ");
	 
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr[i]);
	 }
	 
	 void (*fptr)(int) = perfectsqu;
	 printf("Perfect squarei n array is : ");
	 for(int i = 0; i < n; i++) {
	 
		 fptr(arr[i]);
	 }
	 printf("\n");
 
 
 }

/*

Enter the size of array : 4
Enter the element in array : 13 16 36 71
Perfect squarei n array is : 16 36

 */

