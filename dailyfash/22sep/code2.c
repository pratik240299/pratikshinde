
#include<stdio.h>

 void main() {

	int pin1,pin2,pin3;
        int roll1,roll2,roll3;

	printf("Enter student1 rollno & pincode : ");
	scanf("%d %d",&roll1,&pin1);
	
	printf("Enter student2 rollno & pincode : ");
	scanf("%d %d",&roll2,&pin2);
	printf("Enter student3 rollno & pincode : ");
	scanf("%d %d",&roll3,&pin3);

	int *iptr1 = &roll1;
	int *iptr2 = &roll2;
	int *iptr3 = &roll3;
	int *iptr4 = &pin1;
	int *iptr5 = &pin2;
	int *iptr6 = &pin3;

	printf("roll no : %d ,Pincode = %d\n",*iptr1,*iptr4);
	printf("roll no : %d ,Pincode = %d\n",*iptr2,*iptr5);
	printf("roll no : %d ,Pincode = %d\n",*iptr3,*iptr6);


 }

/*
Enter student1 rollno & pincode : 1 411041
Enter student2 rollno & pincode : 2 423105
Enter student3 rollno & pincode : 3 423203
roll no : 1 ,Pincode = 411041
roll no : 2 ,Pincode = 423105
roll no : 3 ,Pincode = 423203

*/
