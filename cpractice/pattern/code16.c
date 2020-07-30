
#include<stdio.h>

 void main() {
 

	 for(int i = 1; i <= 4; i++) {

		 int x = 1;
		 for(int k =3; k>= i; k--) {
		 
			 printf("  ");
		 }
		 for(int j = 1; j <= i *2 -1; j++) {
		 
			 printf("%d ",x);
			 if(j >= 4) {
			 
				 x--;
			 }
			 else {
			 
				 x++;
			 }
			 
		 }
		 printf("\n");
	 }
 }
