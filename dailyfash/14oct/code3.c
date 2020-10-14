
#include<stdio.h>

 void main() {
 

	 int pass[12];

	 printf("Enter the password  : ");
	 for(int i = 0; i < 12; i++)  {
	 
		 if(i <= 1)
			 scanf(" %c",&pass[i]);
		 else 
			 scanf("%d",&pass[i]);
	 }
	 void *vptr = &pass;

	 printf("PASSWORD IS : ");
	 for(int i = 0; i < 12; i++) {

		vptr = pass + i;	 
		 if(i <= 1)
			 printf("%c",*(char*)vptr);
		 else 
			 printf("%d",*(int*)vptr);
	 }
	 printf("\n");


 }

/*
 * Enter the password  : P S 9 1 5 6 8 6 7 1 6 3
   PASSWORD IS : PS9156867163
 */
