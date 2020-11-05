#include<stdio.h>
#include<string.h>


 void main() {
 
	 char str[20];
	 int n;
	 printf("Enter the String : ");
	 scanf("%[^\n]",str);

	 int x = strlen(str);
	 printf("Enter the number from last : ");
	 scanf("%d",&n);

	 printf("Output : ");
	 for(int i = n; str[x-i] != '\0'; i--) {
	 
		 printf("%c",str[x-i]);
	 }
	 printf("\n");
 }

/*
Enter the String : India is my
Enter the number from last : 5
Output : is my


*/
