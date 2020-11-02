
#include<stdio.h>

 int mycode(char*str,int x) {
 
	 int count = 0;
	 while(*str != '\0') {
	 
		 if(*(str) == x) {
			
			 count++;
		 }
		 str++;
	 }
	 return count;
}

 void main() {
 
	 int n,output = 0;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 printf("Enter the string : ");
	 char str[n];
	 scanf(" %[^\n]",str);
	 char vowel[] = {'a','e','i','o','u',};

	 for(int i = 0; i < 5; i++) {
	 
		 output = mycode(str, vowel[i]);
		 printf("%c occurred %d times\n",vowel[i],output);
	 }


 }

/*
 *
 * Enter the size of array : 30
Enter the string : Core2web Technologies
a occurred 0 times
e occurred 4 times
i occurred 1 times
o occurred 3 times
u occurred 0 times


*/
