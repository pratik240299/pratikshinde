
#include<stdio.h>
#include<string.h>

 void main() {
 
	 char str1[20];
	 char str2[20];
	 char str3[10];
	 int n;
	 printf("Enter the String1 : ");
	 scanf("%[^\n]",str1);
	 printf("Enter the String2 : ");
	 scanf(" %[^\n]",str2);
	 printf("Enter the number upto : ");
	 scanf("%d",&n);

	 strncpy(str3,str2,n);
	 strcat(str1,str3);
	 int x = strlen(str1);
	 str1[x] = '\0';
	 printf("%s\n",str1);

 }
