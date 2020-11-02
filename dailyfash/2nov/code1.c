
#include<stdio.h>

void myreverse(char *str, int x) {

	char ch;
	printf("OUTPUT : ");
	for(int i = 0; i <= x/2; i++) {
	
		ch = *(str+i);
		*(str+i) = *(str+(x-i));
		*(str+(x-i)) = ch;
	}
	for(int i = 0; i <= x; i++) {
	
		printf("%c",*(str+i));
	}
	*str = '\0';
}

void main() {

	int n,count = 0;
	printf("Enter the size of array : ");
	scanf("%d",&n);

	char str[n];
	printf("Enter the String : ");
	scanf(" %[^\n]",str);

	for(int i = 0; i < n; i++) {
	
		if(str[i] == '\0')
			break;
		else
			count++;
	}
	
	myreverse(str,count);
	printf("\n");
}

/*
 * Enter the size of array : 10
   Enter the String : Core2web
   OUTPUT : bew2eroC

*/
