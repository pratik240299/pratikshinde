
#include<stdio.h>
 
 void des_num(int *iptr,int x) {
 
	for(int i = 0; i < x; i++) {
	
		for(int j = i + 1; j < x; j++) {
		
			if(*(iptr+i) > *(iptr+j)) {
			
				int a = *(iptr+i);
				*(iptr+i) = *(iptr+j);
				*(iptr+j) = a;
			}
		}
	}

 }
 void main() {
 
	 int n;
	 printf("Enter the size pf array : ");
	 scanf("%d",&n);

	 int arr[n];
	 printf("Enter the element in array : ");

	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&arr[i]);
	 }
	 des_num(arr,n);

	 printf("OUtput : ");
	 for(int i = 0; i < n; i++) {
	 
		 printf("%d ",arr[i]);
	 }
	 printf("\n");

 }

/*
 * Enter the size pf array : 5
   Enter the element in array : 3 5 2 8 6
   OUtput : 2 3 5 6 8

*/
