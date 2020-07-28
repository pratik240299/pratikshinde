
#include<stdio.h>

 void main() {
 
	 int n;
	 printf("Enter the number: ");
	 scanf("%d",&n);

	 for(int i = n; i >= 2; i--) {
	 
		int num = 1;
		for(int j =1; j <= 10; j++) {
		
			printf("%d ",i*num);
			num++;
		}
		printf("\n");
	 }
 }

/*
 
Enter the number: 6
6 12 18 24 30 36 42 48 54 60
5 10 15 20 25 30 35 40 45 50
4 8 12 16 20 24 28 32 36 40
3 6 9 12 15 18 21 24 27 30
2 4 6 8 10 12 14 16 18 20

*/
