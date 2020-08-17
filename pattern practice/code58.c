
#include<stdio.h>

 void main() {

	 int num ;
	 int var1 = 3,var2 = 1; 
	 for(int i = 1; i <= 7; i++) {
	
		if(i <= 4) {
                        
			 num = var1;
			 for(int k = 1; k <= i; k++) {
			 
				 printf("%d ",num);
				 num++;
			 }
			 var1--;
		}
		else {
		
			var2 = (i - 3) - 1;	

			for(int j = 1; j <= 7 - i + 1; j++) {
			
				printf("%d ",var2);
				var2++;
			
			}
		}
		printf("\n");
	} 

 }

/*
 *
3
2 3
1 2 3
0 1 2 3
1 2 3
2 3
3

*/
