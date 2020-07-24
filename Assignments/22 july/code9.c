
#include<stdio.h>

 void main() {
 
	 int i = 1;

	 while(i <= 5) {
	 
		 int j = 1;
		 while(j <= i) {
		 
			 if(j==2 || j== 4)
				 printf("0 ");
			 else 
				 printf("1 ");

			 j++;
		 }
		 printf("\n");
		 i++;
	 }
 }


/*

1 
1 0 
1 0 1 
1 0 1 0 
1 0 1 0 1 

*/
