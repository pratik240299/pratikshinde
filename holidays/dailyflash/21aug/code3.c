:wq
#include<stdio.h>

 void main() {
 
	 int age;
	 char sex, martial;
	 printf("Enter age , sex, martialstatus : ");
	 scanf("%d %c %c",&age,&sex,&martial);

	 if(sex == 'F')
		 printf("she will work in urban areas\n");
	 
	 else if(sex == 'M' && (age >= 20 && age <= 40))
		 printf("he will work anywhere as per his choice\n");
	 
	 else if(sex == 'M' && (age >= 40 && age <= 60))
		 printf("he will work in urban areas only\n");
	 else
		 printf("Error");

 }

/*
 *
 * Enter age , sex, martialstatus : 23 M Y
   he will work anywhere as per his choice
 */
