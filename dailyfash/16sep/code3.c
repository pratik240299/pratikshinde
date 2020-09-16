
#include<stdio.h>

 void main() {
 

	int n,new;
        printf("Enter the size of array : ");
	scanf("%d",n);
	
	int array1[n] = {23,34,67,24};
	int array2[n] = {45,342,73,43};
	
	for(int i = 0; i < n; i++) {
	
		for(int j = 0; j < n; j++) {
		
			if(array1[i] > array1[j]) {
			
				new = array1[i];
			        array1[i] = array1[j];
			 	array1[j] = new;	
			}
		}
	}
	for(int i = 0; i < n; i++) {
	
		for(int j = 0; j < n; j++) {
		
			if(array2[i] > array2[j]) {
			
				new = array2[i];
			        array2[i] = array2[j];
			 	array2[j] = new;	
			}
		}
	}
	for(int i = 0; i < 4; i++) {
	
		if(count < )
	}
		

 }
