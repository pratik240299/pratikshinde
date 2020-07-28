
#include<stdio.h>

 void main() {

	int n;
        printf("Enter the number of rows: ");
	scanf("%d",&n);	
	for(int i =1; i <= n ;i++)  {
	
		int mult = 1, num = 1;
		for(int j = 1; j <= 5; j++) {
		
			if(i + j <= 5) {
			
				printf("  ");
			}
			else {
			
				mult = mult * num;
				printf("%d ",mult);
				num++;
			}
		}
		printf("\n");
	}

 }

/*
Enter the number of rows: 5
        1
      1 2
    1 2 6
  1 2 6 24
1 2 6 24 120
*/
