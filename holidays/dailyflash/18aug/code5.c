
#include<stdio.h>

 void main() {
 
	 int a, b, c;
       	 printf("Enter the 3 numbers: ");
	 scanf("%d %d %d",&a,&b,&c);

	 if(a >= b && a >= c)
		 printf("%d is max number among %d, %d & %d\n",a,a,b,c);
	 else if(b >= a && b >= c)
		 printf("%d is max number among %d, %d & %d\n",b,a,b,c);
	 else 
		 printf("%d is max number among %d, %d & %d\n",c,a,b,c);
 }

/*

Enter the 3 numbers: 1 4 2
4 is max number among 1, 4 & 2

*/
