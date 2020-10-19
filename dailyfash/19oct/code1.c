
#include<stdio.h>

 void main() {
 
	 int stud[5][3];
	 int num = 0;

	 printf("Enter the the marks of student : ");
	 for(int i = 0; i < 5; i++) {
	 
		 for(int j = 0; j < 3; j++) {
		 
			 scanf("%d",&stud[i][j]);
		 }
	 }
	 for(int i = 0; i < 3; i++) {
	 
		 int max = 0;
		 for(int j = 0; j < 5; j++) {
		 
			 if(stud[j][i] > max) {
			 
				 max = stud[j][i];
			 }	
		 }
		 num++;
		 printf("Highst marks in subject %d is %d\n",num,max);
	 }
 }

/*
Enter the the marks of student : 30 40 50 32 78 24 45 87 97 45 75 36 45 78 98
Highst marks in subject 1 is 45
Highst marks in subject 2 is 87
Highst marks in subject 3 is 98

*/
