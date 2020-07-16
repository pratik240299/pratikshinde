
#include<stdio.h>

 void main() {
 
 	int math,english,physics,hindi,chemistry;
	int total;
	int a;

	printf("enter marks of 5 subject :");
        scanf("%d %d %d %d %d",&math,&english,&physics,&hindi,&chemistry); 

	total=math+english+physics+hindi+chemistry;
        printf("total marks=%d\n",total);

        a=total>270;
        switch(a) {
	
			case 1: 
					printf("you are pass\n");
					

					 	if(total>270 && total<=500) {
								printf("your grade is first class\n");
						}
						else{
								printf("your grade is second class\n");
						}
						break;
	
			case 0:
					printf("your are fail\n");
					break;				
	
	}      


 }
