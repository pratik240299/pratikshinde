
#include<stdio.h>

 int count = 0;
 void fun2(int x,void (*fptr)(int)) {
 
	 fptr(x);
 }
 void fun1(int y) {
 
	for(int i = 1 ; i <= y; i++) {
	
		if(y % i == 0)
			count++;
	}
	if(count == 2 || y == 1)
		printf("%d is prime number\n",y);
	else 
		printf("%d is not prime number\n",y); 
 }

 void main() {
 
	int num;
        printf("Enter the number : ");
	scanf("%d",&num);
	void fun2(num,fun1);
 }
