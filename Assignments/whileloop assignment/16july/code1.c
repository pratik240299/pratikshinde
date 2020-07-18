
#include<stdio.h>

 void main() {
 
 	int i=1;
	int N;
	int sum=0;
	int mult=1;

	printf("enter N=");
	scanf("%d",&N);

	while(i<=N) {
	
		if(i%2==0) {	
			sum=sum+i;
		}
		else {
			mult=mult*i;
		}

		i++;	
	}

	printf("Sum of all even number between 1 to %d :%d\n",N,sum);
	printf("Multiplication of odd numbers between 1 to %d :%d\n",N,mult);

 }

//enter N=10
//Sum of all even number between 1 to 10 :30
//Multiplication of odd numbers between 1 to 10 :945

 
