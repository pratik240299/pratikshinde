
#include<stdio.h>

 void main() {
 
 	int a=5,b=3;

	switch(a) {
	
		case 1:                               //false
			printf("one\n");
			break;
		case 5:                              //true  
		       	printf("two\n");
             		break;
		case 'b':                            //false
			printf("three\n");
			break;
		case'a':                             //false
			printf("four\n");
			break;
		default:                             //false   
			printf("else\n");
			break;
	
	}
 
 }
