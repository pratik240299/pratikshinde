
#include<stdio.h>
 
int add_sub(int a,int b) {

	int add = 0, sub = 0;
 	add = a + b;
	sub = a - b;

	return (add,sub);
}

void main() {

	int x  = add_sub(10,5);
	printf("%d\n",x); 		// 5

}


// 5
