
#include<stdio.h>

 void main() {
 
	 int num;
	 printf("enter the number: ");
	 scanf("%d",&num);

	 do{
	 
		 printf("%d\n",num);
		 num--;
	 }while(num != -1);
 }

/*
enter the number: 15
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1
0

*/
