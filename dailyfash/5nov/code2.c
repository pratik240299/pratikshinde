
#include<stdio.h>

 struct Student {
 
	 int stud_id;
	 char stud_name[20];
	 char stud_garde;
	 char stud_mail[30];
 };

 void main() {
 
	 struct Student obj1 = {123,"Mayank",'A',"mayankagrawal12@gmail.com"};
	 struct Student obj2 = {456,"Divya",'B',"divyawagh99@gmail.com"};

	 struct Student *iptr1 = &obj1;
	 struct Student *iptr2 = &obj2;

	 printf("Student 1: \n");
	 printf("Id = %d\nStudent name = %s\nStudent grade = %c\nStudent mail = %s\n",iptr1->stud_id,iptr1->stud_name,iptr1->stud_garde,iptr1->stud_mail);
	 printf("Student 2 : \n");
	 printf("Id = %d\nStudent name = %s\nStudent grade = %c\nStudent mail = %s\n",iptr2->stud_id,iptr2->stud_name,iptr2->stud_garde,iptr2->stud_mail);

 }

/*
Student 1:
Id = 123
Student name = Mayank
Student grade = A
Student mail = mayankagrawal12@gmail.com
Student 2 :
Id = 456
Student name = Divya
Student grade = B
Student mail = divyawagh99@gmail.com

*/
