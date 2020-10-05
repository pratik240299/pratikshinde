
#include<stdio.h>

 void main() {
 
	 int arr[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

	 printf("%p\n",arr);            //100
	 printf("%p\n",arr[1]); 	//120
	 printf("%p\n",&(arr[1][2]));	//128
	 printf("%d\n",(arr[1][2]));	//8
 }

/*
0x7ffc2b76e480
0x7ffc2b76e494
0x7ffc2b76e49c
8


*/
