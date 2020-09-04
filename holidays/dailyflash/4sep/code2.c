
#include<stdio.h>

 void main() {
 
	 int num;
	 printf("Enter the number : ");
	 scanf("%d",&num);

	 int suc = num + 2;
	 int pre = num - 2;
	 printf("Second Predecessor : %d\n",pre);
	 printf("Second Successor : %d\n",suc);

 
 }

/*
 *
Enter the number : 50
Second Predecessor : 48
Second Successor : 52

*/
