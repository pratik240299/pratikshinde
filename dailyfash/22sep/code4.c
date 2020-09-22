
#include<stdio.h>

 void main() {
 
	 int num1,num2;
	 int temp;

	 printf("Enter the 2 number : ");
	 scanf("%d %d",&num1,&num2);

	 int *iptr1 = &num1;
	 int *iptr2 = &num2;

	 temp = *iptr1;
	 *iptr1 =  *iptr2;
	 *iptr2 = temp;

	 printf("After swaping varaiable : \n");
	 printf("%d\n",*iptr1);
	 printf("%d\n",*iptr2);
 }

/*
Enter the 2 number : 23 78
After swaping varaiable : 
78
23


*/
