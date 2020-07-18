
#include<stdio.h>

 void main() {
 
	 int num;
	 int new;

	 printf("Enter the Number:");
	 scanf("%d",&num);
	 
	 	if(num%2==0) {
			
			while(num>=1) {
			
				printf("%d",num);
				num--;
			}
			
		}
		else {
			while(num>=1) {
				
				printf("%d",num);
				num=num-2;
			}
		}

		printf("\n");
		
	
 }

//Enter the Number:6
//654321
//Enter the Number:7
//7531


