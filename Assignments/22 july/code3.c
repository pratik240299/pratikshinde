
#include<stdio.h>

 void main() {
 
	 int i = 1;
	 int num=5;

	 while(i <= 5) {
	 
		 

		 int j = 5;
		 while(j >= i) {
		 
			 if(i==1)
				 printf("%d ",i*num);
			 else if(i==2) {
				 printf("%d ",i*num);
			 }
		         else if(i==3) {
				 printf("%d ",i*num);
			 }
			 else if(i==4) {
				 printf("%d ",i*num);
			 }
			 else
				 printf("%d ",i*num);

			num--;
			j--;	 

		 }

		 printf("\n");
		 num= 5-i;
		 i++;
	 }
 }
