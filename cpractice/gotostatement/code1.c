
#include<stdio.h>

void main() {

	int x=1;

	goodmorning:
		printf("Good\n");
		printf("nice day\n");
		x++;

	if(x<=10)
		goto goodmorning;	

}

//Good
//nice day
//Good
///nice day
//Good
//nice day
//Good
//nice day
//Good
//nice day
//Good
//nice day
//Good
//nice day
//Good
//nice day
//Good
//nice day
//Good
//nice day

