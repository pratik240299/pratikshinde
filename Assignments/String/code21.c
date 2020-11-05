
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main() {

	char str1[20], str2[20];
	int ret = 0;
	printf("Enter the String1: ");
	scanf("%[^\n]",str1);
	printf("Enter the String2: ");
	scanf(" %[^\n]",str2);

	ret = stricmp(str1,str2);

	if(ret == 0)
		printf("Both String are equal\n");
	else {
	
		for(int i = 0; str1[i] != '\0'; i++) {
		
			if(str1[i] != str2[i]) {
			
				printf("%d\n",str1[i]-str2[i]);
				break;
			}
		}
	}
	


}

/*
Enter the String1: FirStr
Enter the String2: FirNew
Enter the number upto : 3
Both String are equal

*/
