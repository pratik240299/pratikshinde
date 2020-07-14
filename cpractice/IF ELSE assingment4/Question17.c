
#include<stdio.h>

 void main() {
 
 int NumberOne,NumberTwo,NumberThree;
 printf("NumberOne:");
 scanf("%d",&NumberOne);
 printf("NumberTwo:");
 scanf("%d",&NumberTwo);
 printf("NumberThree:");
 scanf("%d",&NumberThree);

 if(NumberOne>NumberTwo && NumberOne>NumberThree ){
 
	 printf("the largest number among %d %d %d is %d\n",NumberOne,NumberTwo,NumberThree,NumberOne);

	 if(NumberOne%2==0)
		 printf("%d is even number\n",NumberOne);
	 else
		 printf("%d is odd number\n",NumberOne);
 }
 else if(NumberTwo>NumberOne && NumberTwo>NumberThree) {
 
 	printf("The largest number among %d %d %d is %d\n",NumberOne,NumberTwo,NumberThree,NumberTwo);

	if(NumberTwo%2==0)
		printf("%d is even number\n",NumberTwo);
	else
		printf("%d is odd number\n",NumberTwo);
 
 }
 else if(NumberThree>NumberOne && NumberThree>NumberTwo) {
 	
	 printf("the largest number among %d %d %d is %d\n",NumberOne,NumberTwo,NumberThree,NumberThree);

	 if(NumberThree%2==0)
		 printf("%d is even number\n",NumberThree);
	 else
		 printf("%d is odd number\n",NumberThree);
 }


 
 }
