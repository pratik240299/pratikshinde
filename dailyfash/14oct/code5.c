
#include<stdio.h>

 void main() {
 
	 int Empld,NumDaysWorked;
	 printf("Enter the employee id : ");
	 scanf("%d",&Empld);
	 float salary;
	 printf("Enter the employee salary : ");
	 scanf("%f",&salary);
	 printf("Enter the employee no of days work : ");
	 scanf("%d",&NumDaysWorked);

	 void *vptr1 = &Empld;
	 void *vptr2 = &salary;
	 void *vptr3 = &NumDaysWorked;

	 printf("Employee id is : %d\n",*(int*)vptr1);
	 printf("Employee salary : %f\n",*(float*)vptr2);
	 printf("Employee number of work days : %d\n",*(int*)vptr3);

 }

/*
Enter the employee id : 9156
Enter the employee salary : 50.0000
Enter the employee no of days work : 24
Employee id is : 9156
Employee salary : 50.000000
Employee number of work days : 24

*/
