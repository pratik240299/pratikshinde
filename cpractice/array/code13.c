
#include<stdio.h>

 void main() {
 
	 int num,min = 0,rem = 0;
	 printf("Enter the size of array :");
	 scanf("%d",&num);

	 printf("Enter array element : ");
	 int number[num];

	 for(int i = 0; i < num; i++) {
	 
		 scanf("%d",&number[i]);
	 }
	 printf("strong number in arrays : ");
	 for(int i = 0; i < num; i++) {
	 
		 int sum = 0;
		 for(int new = number[i]; new != 0; new = new / 10) {
		
			 int fac = 1;
			 rem = new % 10;
			 for(int j = 1; j <= rem; j++) {
			 
				 fac = fac * j;
			 }
			 sum = sum + fac;
		 }
		 if(sum == number[i])
			 printf("%d ",number[i]);
	 }
	 printf("\n");
 }


/*
 *
Enter the size of array :5
Enter array element : 1 2 145 23 42
strong nuimber in arrays : 1 2 145

*/
