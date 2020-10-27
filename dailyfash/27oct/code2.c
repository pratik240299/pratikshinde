
#include<stdio.h>

 int output1,output2,output;
 void sq(int x,int y) {
 
	 output1 = x * x;
	 output2 = y * y;
	 printf("square of number %d is %d\n",x,output1);
	 printf("square of number %d is %d\n",y,output2);
 }
 void cube(int x,int y) {
 
	 output1 = x * x * x;
	 output2 = y * y * y;
	 printf("cube of number %d is %d\n",x,output1);
	 printf("cube of number %d is %d\n",y,output2);

 }
void multsqu(int x,int y) {

	 output = (x * y) * (x * y);
	 printf("square of multiplication of %d & %d is %d\n",x,y,output);
}
void multcube(int x,int y) {

	 output = (x * y) * (x * y) * (x * y);
	 printf("cube of multiplication of %d & %d is %d\n",x,y,output);

}
 void main() {

	int num1,num2,i;
        printf("Enter the 2 number : ");
	scanf("%d %d",&num1,&num2);
	
	void (*fptr[])(int,int)	= {sq,cube,multsqu,multcube};
	printf("What u want to do : \n");
	printf(" 0. square of number\n");
	printf(" 1. cube of number\n");
	printf(" 2. square of multiplication of number\n");
	printf(" 0. cube of multiplication of number\n");
	printf("Enter ur choice : ");
	scanf("%d",&i);

	fptr[i](num1,num2);


 }

/*
 * Enter the 2 number : 10 20
What u want to do :
 0. square of number
 1. cube of number
 2. square of multiplication of number
 0. cube of multiplication of number
Enter ur choice : 2
square of multiplication of 10 & 20 is 40000

 */
