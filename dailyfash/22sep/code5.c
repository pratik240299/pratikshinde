
#include<stdio.h>

 void main() {
 
	 int Employee_id,Employee_age,Employee_salary;

	 printf("Enter the Employee_id : ");
	 scanf("%d",&Employee_id);
	 printf("Enter the Employee_age : ");
	 scanf("%d",&Employee_age);
	 printf("Enter the Employee_salary : ");
	 scanf("%d",&Employee_salary);

	 int *iptr1 = &Employee_id;
	 int *iptr2 = &Employee_age;
	 int *iptr3 = &Employee_salary;

	 printf("value : \n");
	 printf("id = %d\n",*iptr1);
	 printf("age = %d\n",*iptr2);
	 printf("salary = %d\n",*iptr3);
	 

 }

/*
 *
Enter the Employee_id : 241
Enter the Employee_age : 26
Enter the Employee_salary : 80000
value :
id = 241
age = 26
salary = 80000

*/
