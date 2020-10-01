
#include<stdio.h>

 void main() {
 
	int arr[3][5] = {{1,2},{6,7,8,9},{11,12,13}};

	printf("value : \n");
	for(int i = 0; i < 3; i++) {
	
		for(int j = 0; j < 5; j++) {
		
			printf("%d\n",arr[i][j]);
		}
	}

 }

/*
value : 
1
2
0
0
0
6
7
8
9
0
11
12
13
0
0

 */
