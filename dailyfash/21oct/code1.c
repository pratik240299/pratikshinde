
#include<stdio.h>

 int num = 999;
 int min_num(int x,int y) {
 
	 if(x < num) {
		 num = x;
	 }
	 return num;
 }
 void main() {
 
	 int n,num;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 int arr[n];

	 printf("Enter the element in array : ");
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr[i]);
	 }
	 for(int i = 0; i < n; i++) {
	 
		 num = min_num(arr[i],n);
	 }
	 printf("Output : %d\n",num);
 }

/*

Enter the size of array : 5
Enter the element in array : 6 7 8 4 3
Output : 3

*/
