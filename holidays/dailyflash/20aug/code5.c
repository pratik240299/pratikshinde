
#include<stdio.h>

 void main() {
 
	 int physic, chemistry, bio, math,computer;
	 printf("enter the marks of 5 subject : ");
	 scanf("%d %d %d %d %d",&physic,&chemistry,&bio,&math,&computer);
	 float percentage = (((physic + chemistry + bio + math + computer) / 500) * 100);

	 if(percentage >= 90)
		 printf("Grade A\n");
	 else if(percentage >= 80)
		 printf("Grade B\n");
	 else if(percentage >= 70)
		 printf("Grade C\n");
	 else if(percentage >= 60)
		 printf("Grade D\n");
	 else if(percentage >= 40)
		 printf("Grade E\n");
	 else if(percentage < 40)
		 printf("Grade F\n");
 }
