
#include<stdio.h>

 void main() {
 
	 int arr[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

	 printf("%p\n",arr);
	 printf("%p\n",arr[0]);
	 printf("%p\n",&(arr[0][0]));
	 printf("%d\n",(arr[0][0]));
 }

/*
0x7ffd7e8966d0
0x7ffd7e8966d0
0x7ffd7e8966d0
1

*/
