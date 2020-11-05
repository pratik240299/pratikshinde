
#include<stdio.h>

 void main() {
 
	 char input[20];
	 int count = 0,c1;
	 printf("Enter the string : ");
	 scanf("%[^\n]",input);
	 printf("Enter the number : ");
	 scanf("%d",&c1);

	 printf("Output : ");
	 for(int i = 0; input[i] != '\0'; i++) {
	 
		 if(input[i] == ' ')
			 count++;
		 else {
		 
			 if(c1 == count+1)
				 printf("%c",input[i]);
		 }

	 }
	 printf("\n");
 }

/*
 * Enter the string : in my he she 
   Enter the number : 3
   Output : he


*/
