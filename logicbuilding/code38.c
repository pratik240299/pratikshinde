
#include<stdio.h>

 void main() {
 
	   int num;
	   printf("Enter the number : ");
	   scanf("%d",&num);

	 for(int i = 1; i <= num; i++) {
	 
		 printf("%d / %d = %d\t %d %c %d = %d\n",i,num,i/5,i,'%',num,i % num);
	 }
 }

/*
 *
 * Enter the number : 5
1 / 5 = 0	 1 % 5 = 1
2 / 5 = 0	 2 % 5 = 2
3 / 5 = 0	 3 % 5 = 3
4 / 5 = 0	 4 % 5 = 4
5 / 5 = 1	 5 % 5 = 0

*/
