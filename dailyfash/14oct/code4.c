
#include<stdio.h>

 void main() {
 
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);

	int arr1[n];
	printf("Enter the element in 1 integer array : ");
	for(int i = 0; i < n; i++) {
		
		scanf("%d",&arr1[i]);
	}
	int arr2[n];
	printf("Enter the element in 2 integer array : ");
	for(int i = 0; i < n; i++) {
		
		scanf("%d",&arr2[i]);
	}
	float arr3[n];
	printf("Enter the element in float array : ");
	for(int i = 0; i < n; i++) {
		
		scanf("%f",&arr3[i]);
	}

	void *vptr1 = arr1;
	void *vptr2 = arr2;
	void *vptr3 = arr3;

	int *vptr[] = {vptr1,vptr2,vptr3};

	for(int i = 0; i < 3; i++) {
	
		if(i <= 1) {
			
			for(int j = 0; j < n; j++) {
		
				printf("%d\n",(*(int*)(*(vptr[i]) + j)));
			}
		}
		else {
		
			for(int j = 0; j < n; j++) {
		
				printf("%f\n",(*(int*)(*(vptr[i]) + j)));
			}
		}
 	}
 }
