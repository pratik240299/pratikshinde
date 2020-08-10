
#include<stdio.h>

 void main() {
 
	 int rem = 0;
	 int start;
	 int end;
	 printf("Enter the Start: ");
	 scanf("%d",&start);
	 printf("Enter the End: ");
	 scanf("%d",&end);
	 int var;

	 for(start; start <= end; start++) {
	 
		 var = start;
		 int rev = 0;
		 for(int num = start; num != 0; num = num / 10) {
		 
			 rem = num % 10;
			 rev = rev*10 + rem;
		 
		 }
		 
		if(var == rev)
			 printf("%d ",rev);
	 }
 }

/*
 *
Enter the Start: 100
Enter the End: 200
101 111 121 131 141 151 161 171 181 191

*/
