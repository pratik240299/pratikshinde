
#include<stdio.h>

 void main() {
 
	 int n,new = 1;;
	 printf("Enter the no of student : ");
	 scanf("%d",&n);

	 int marks[n],reverse[n];
	 printf("Enter the marks of %d student: ",n);

	 for(int i = 0; i < n; i++) {
	 
		 scanf("%d",&marks[i]);
	 }
	 /*
	 for(int i = 0; i < n; i++) {
	 
		 printf("%d ",marks[i]);
	 }
	 */
	 printf("Reverse of marks : ");
	 for(int i = 0; i < n; i++) {
	 
		 reverse[i] = marks[n - new];
		 printf("%d ",reverse[i]);
		 new++;
	 }
	 printf("\n");
 }

/*
 *
Enter the no of student : 4
Enter the marks of 4 student: 56 63 74 60
Reverse of marks : 60 74 63 56

*/
