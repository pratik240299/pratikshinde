
#include<stdio.h>

 void main() {
 
 	int lw;
	int up;
	int ans;

	printf("Enter lower bound of range:");
	scanf("%d",&lw);
	printf("Enter upper bound of range:");
	scanf("%d",&up);

	while( lw <= up ) {
	
		if(lw % 2 == 0) {
			ans=lw * lw;
			printf("%d ",ans);
			
		}
		else {
			ans=lw * lw * lw;
			printf("%d ",ans);
		}
		
		lw++;	
	}

	printf("\n");

 
 }

//Enter lower bound of range:1
//Enter upper bound of range:5
//1 4 27 16 125 


