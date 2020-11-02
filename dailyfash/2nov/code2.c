#include<stdio.h>

 void mycompare(char *str1, char *str2) {
 
	int flag = 0;
	while(*str1 != '\0' || *str2 != '\0') {
	
		if(*str1 == *str2) {
		
			str1++;
			str2++;
		}
		else if(*str1 != *str2) {
		
			flag = 1;
			break;
		}
	} 
	if(flag == 0)
		printf("Strings area equal\n");
	else if(flag == 1)
		printf("String are not equal\n");
	 
	 
 }

 void main() {
 
	 int n1,n2;
	 printf("Enter the size of string1 : ");
	 scanf("%d",&n1);
	 printf("Enter the size of string2 : ");
	 scanf("%d",&n2);

	 printf("Enter the First String : ");
	 char input1[n1];
	 scanf(" %[^\n]",input1);
	 printf("Enter the Second String : ");
	 char input2[n2];
	 scanf(" %[^\n]",input2);

	 mycompare(input1,input2);

 }
