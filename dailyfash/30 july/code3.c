
#include<stdio.h>

 void main() {
 
	 
	 for(int i = 1; i <= 4; i++) {
	 
		 int num = i + 1;
		 for(int k =3; k >= i; k--) {
		 
			 printf("  ");
		 }
		 for(int j =1; j <= i*2-1; j++) {
		 
			 if(j <= i) {
			 
				 num--;
				 printf("%d ",num *num *num);
				 
			 }
			 else { 
			 
				 num++;
				 printf("%d ",num*num);
			 }
			
			 
		 }
		 printf("\n");
	 }
 
 }
