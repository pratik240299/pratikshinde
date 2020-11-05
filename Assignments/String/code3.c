
#include<stdio.h>

 void main() {
 
	 char input[30];
	 int c1 = 0, c2 = 0, c3 = 0;
	 printf("Input : ");
	 scanf("%[^\n]",input);

	 char *str = input; 
	 printf("Output : ");
	 while(*str != '\0') {
	 
		 if(*str >= 65 && *str <= 90)
			 c1++;
		 else if(*str >= 97 && *str <= 122)
			 c2++;
		 else if(*str >= 48 && *str <= 57)
			 c3++;
		 str++;
	 }
	 printf("Small: %d Capital: %d Digit: %d\n",c1,c2,c3);
 }

/*
 * Input : abcDE 5Glm1 O
   Output : Small: 4 Capital: 5 Digit: 2
*/
