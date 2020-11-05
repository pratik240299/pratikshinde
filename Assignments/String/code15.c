
#include<stdio.h>
#include<string.h>


void main() {

	int n;
	char str1[20];
	char str2[20];
	printf("Enter the String : ");
	scanf("%[^\n]",str1);
	printf("Enter the number : ");
	scanf("%d",&n);

	printf("Output : ");
	strncpy(str2,str1,n);
	str2[n] = '\0';
	printf("%s\n",str2);
}

/*
Enter the String : India is my
Enter the number : 8
Output : India is

*/
