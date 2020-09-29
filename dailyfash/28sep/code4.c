
#include<stdio.h>

 void main() {
 
	 int n;
	 float sum = 0;
	 printf("Enter the no of subject : ");
	 scanf("%d",&n);

	 float marks[n];

	 printf("Enter the marks : ");

	 float *iptr = marks;
	 for(int i = 0; i < n; i++) {
	 
		 scanf("%f",iptr + i);
		 sum = sum + marks[i]; 
	 }

	 float per = (sum / (n*100)) * 100;
	 printf("Percentage : %0.2f\n",per);


 }
