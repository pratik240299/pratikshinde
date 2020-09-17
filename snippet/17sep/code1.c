
#include<stdio.h>

 void main() {
 
	 int a[5] = {5,1,15,20,25};
	 int i, j, m;

	 i = ++a[1];
	 j = a[1]++;
	 m = a[i++];

	 printf("%d, %d, %d\n",i,j,m); 

	 int q = 2,p;
	 p = q++;
	 printf("%d %d",p,q);
 
 }
