
#include<stdio.h>

 struct student {
 
	 int stud_rollNo;
	 char *stud_name;
	 float stud_fees;
	 char *stud_DOB;
 };
 
 void main() {
 
	 struct student obj = {24,"Pratik shinde",45000.00,"24 feb 1999"};
	 printf("Roll no : %d\n",obj.stud_rollNo);
	 printf("Student name : %s\n",obj.stud_name);
	 printf("Fee : %f\n",obj.stud_fees);
	 printf("DOB : %s\n",obj.stud_DOB);

	 obj.stud_rollNo = 12;
	 obj.stud_name = "Sahil gupta";
	 obj.stud_fees = 8000;
	 obj.stud_DOB = "12 Dec 1999";
	 
	 printf("\nEdited information : \n");
	 printf("Roll no : %d\n",obj.stud_rollNo);
	 printf("Student name : %s\n",obj.stud_name);
	 printf("Fee : %f\n",obj.stud_fees);
	 printf("DOB : %s\n",obj.stud_DOB); 
 }

/*
Roll no : 24
Student name : Pratik shinde
Fee : 45000.000000
DOB : 24 feb 1999

Edited information :
Roll no : 12
Student name : Sahil gupta
Fee : 8000.000000
DOB : 12 Dec 1999

*/
