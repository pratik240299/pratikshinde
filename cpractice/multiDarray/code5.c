
#include<stdio.h>

 void main() {
 
	 int arr[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

	 printf("array type : \n");
	 printf("%d\n",arr[0][0]);
	 printf("%d\n",arr[0][2]);
	 printf("%d\n",arr[1][3]);
	 printf("%d\n",arr[2][1]);
	 printf("%d\n",arr[2][4]);

	 printf("pointer type : \n");

	 printf("%d\n",*(*(arr+0)+0));
	 printf("%d\n",*(*(arr+0)+2));
	 printf("%d\n",*(*(arr+1)+3));
	 printf("%d\n",*(*(arr+2)+1));
	 printf("%d\n",*(*(arr+2)+4));
 }

/*
 *
 * array type :
1
3
9
12
15
pointer type :
1
3
9
12
15

*/
