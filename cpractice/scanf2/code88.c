
#include<stdio.h>
  
 void main() {
 
 	int x;
	float f;
	char ch;

	printf("enter value for int:\n");
	scanf("%d",&x);

	printf("enter value for float:\n");
	scanf("%f",&f);

	printf("enter value for character:\n");
	scanf(" %c",&ch);

	printf("int value=%d\n",x);
	printf("float value=%f\n",f);
	printf("charcter value=%c\n",ch);
 }
