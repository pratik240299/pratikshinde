
#include<stdio.h>

 struct result {
 
	 int noOfSub;
	 float percent;
	 char grade;
 };

 void main() {
 
	 struct result obj1 = {6,78.5,'C'};
	 struct result obj2 = {6,87.9,'B'};

	 if((obj1.noOfSub==obj2.noOfSub) && (obj1.percent==obj2.percent) && (obj1.grade==obj2.grade))
		 printf("Both Object are equal\n");
	 else
		 printf("Both Object are not equal\n");
 }

/*
 * Both Object are not equal

 */
