
#include<stdio.h>

void main() {

#define x 30
	
	enum days {

		sun = 10,
		mon = 20,
		tue = 30,
	};
	
	enum days obj;
	enum days obj2;

	printf("%d\n",x);
	printf("%d\n",obj);
	printf("%d\n",obj2);
	printf("%d\n",sun);
	printf("%d\n",mon);
	printf("%d\n",tue);
}

/*

30
0
0
10
20
30


*/
