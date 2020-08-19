
#include<stdio.h>

 void main() {
 
	 int a , b, c;
	 printf("Enter the angle of triangles: ");
	 scanf("%d %d %d",&a,&b,&c);

	 if((a + b + c) == 180)
		 printf("the traingles with angles %d %d & %d is a valid one\n",a,b,c);
	 else 
		 printf("the traingles with angles %d %d & %d is a invalid one\n",a,b,c);
 }

/*
 *
 * Enter the angle of triangles: 30 60 70
   the traingles with angles 30 60 & 70 is a invalid one
*/
