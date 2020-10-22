
#include<stdio.h>

 void add(int,int);
 void sub(int,int);
 void mult(int,int);
 void div(int,int);

 void main() {
 
	 void (*fptr[4])(int,int) = {add,sub,mult,div};
	 
	 int x,y,ch;
	 printf("Enter the value : ");
	 scanf("%d %d",&x,&y);
	 printf("what u want to do : \n");
	 printf(" 0. add\n");
	 printf(" 1. sub\n");
	 printf(" 2. mult\n");
	 printf(" 3. div\n");
	 printf("Enter the choice : ");
	 scanf("%d",&ch);

	 if(ch < 0 || ch > 3)
		 printf("Wrong input\n");
	 else
		 fptr[ch](x,y);

 }
 void add(int x,int y) {
 
	 printf("%d\n",x+y);
 }
 void sub(int x,int y) {
 
	 printf("%d\n",x-y);
 }
 void mult(int x,int y) {
 
	 printf("%d\n",x*y);
 }
 void div(int x,int y) {
 
	 printf("%d\n",x/y);
 }

/*

Enter the value : 10 20
what u want to do : 
 0. add
 1. sub
 2. mult
 3. div
Enter the choice : 0
30

*/
