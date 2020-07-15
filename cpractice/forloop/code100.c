
#include<stdio.h>

 void main() {
 
	int sum=0;
	int startnum;
	int endnum;

	printf("enter the numbers:");
	scanf("%d %d",&startnum,&endnum);

 	for(int i=startnum; i<=endnum; i++)
	{
		sum=sum+i;
	}
        
	printf("sum=%d\n",sum);
 
 }
