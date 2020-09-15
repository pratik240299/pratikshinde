
#include<stdio.h>

 void main() {
 
	 int num[6], store[6],max = 0,count = -1;
	 printf("Enter the array Element : ");

	 for(int i = 0; i < 6; i++) {
	 
		 scanf("%d",&num[i]);

		 if(num[i] % 2 == 0)
			store[i] = num[i] * num[i];
		 else
			 store[i] = num[i];
	}
	printf("store value of array on bases of even & odd : ");
	for(int j = 0; j < 6; j++) {
	
		printf("%d ",store[j]);
		
		if(store[j] > max) 
			max = store[j];
	}
	for(int j = 0; j < 6; j++) {
	
		if(max == num[j] * num[j]) {
			printf("\nBiggest number in array is %d and its root is %d\n",max,num[j]);
			break;
		}
		else
			count++;
	}
	if(count == 5)
		printf("\nBiggest number in array is %d\n",max);


 }

/*
 *
Enter the array Element : 1 12 7 24 17 86
store value of array on bases of even & odd : 1 144 7 576 17 7396
Biggest number in array is 7396 and its root is 86

*/
