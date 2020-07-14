
#include<stdio.h>

 void main() {
 
 	float i=0.0f;
	float j=0.0f;

	printf(" i\t j\n");

	for( float num=0; num<10;num++, i=i+0.2f ,j=j-0.2)
	{
		printf("%.2f \t %.2f\n",i,j);
	}
 
 }


