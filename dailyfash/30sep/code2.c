
#include<stdio.h>

 void main() {
 
	 int a[5];
	 printf("Enter the integer value : ");
	 for(int i = 0; i < 5; i++) {
	 
		 scanf("%d",&a[i]);
	 }
	 char b[5];
	 printf("Enter the character value : ");
	 for(int i = 0; i < 5; i++) {
	 
		 scanf(" %c",&b[i]);
	 }
	 float c[5];
	 printf("Enter the float value : ");
	 for(int i = 0; i < 5; i++) {
	 
		 scanf("%f",&c[i]);
	 }

	 int *iptr = a;
	 char *cptr = b;
	 float *fptr = c;

	 iptr = iptr + 1;
	 printf("%d\n",*iptr);
	 iptr = iptr - 1;
	 printf("%d\n",*iptr);
	 cptr = cptr + 1;
	 printf("%c\n",*cptr);
	 cptr = cptr - 1;
	 printf("%c\n",*cptr);
	 fptr = fptr + 1;
	 printf("%f\n",*fptr);
	 fptr = fptr - 1;
	 printf("%f\n",*fptr);

 }

/*
Enter the integer value : 23 56 78 54 12
Enter the character value : A S C B I
Enter the float value : 234.4 56.3 67.2 76.4 89.3
56
23
S
A
56.299999
234.399994

*/
