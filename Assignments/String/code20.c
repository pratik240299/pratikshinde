
#include<stdio.h>
#include<string.h>

void main() {

	char str1[20], str2[20];
	int n;
	printf("Enter the String1: ");
	scanf("%[^\n]",str1);
	printf("Enter the String2: ");
	scanf(" %[^\n]",str2);
	printf("Enter the number upto : ");
	scanf("%d",&n);

	int ret = strncmp(str1,str2,n);

	if(ret == 0)
		printf("Both String are equal\n");
	else
		printf("%d\n",str1[n-1] - str2[n-1]);


}

/*
Enter the String1: FirStr
Enter the String2: FirNew
Enter the number upto : 3
Both String are equal

*/
