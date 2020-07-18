
#include<stdio.h>

 void main() {

	int n,
	int i=1
	int sum=0;

	printf("Enter the no : ");
	scanf("%d",&n);

	while(i<n) {
		
		if(n%i==0)
			sum=sum+i;

		i++;
	}

	if(sum==n)
		printf("%d is perfect no\n",n);
	else 
		printf("%d is not a perfect no\n",n);
 
 }


//Enter the no : 6
//6 is perfect no

