
#include<stdio.h>

 void main() {
    
	 int row;
	 printf("no of rows: ");
	 scanf("%d",&row);
			
	 for(int i =1; i <= row; i++) {
	 
		 char ch = 69 -i;
		 int space = 1;
		 for(int j =1; j <= row; j++) {
		 
			 if(i > space) {
			        
				space++;
				printf("  ");
			 }
			 else {
			 
				 printf("%c ",ch);
				 ch--;
			 }
			 

		 }
		 printf("\n");
		
	 }
 }
