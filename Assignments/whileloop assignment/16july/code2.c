
#include<stdio.h>

 void main() {
 
 	int num;
	int count=0;

	printf("Enter the number:");
	scanf("%d",&num);

	while(num>0) {
	
		count=count+1;
		num=num/10;
		
	
	}
	printf("NO of digit:%d\n",count);
		
 }

//Enter the number:13345
//NO of digit:5

