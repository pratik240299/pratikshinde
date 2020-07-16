
#include<stdio.h>

 void main() {
 
 	float a=5.2;

	switch((int)a) {
	
		case 1:                                    // false
			printf("one\n");
			break;
		case 5:                                   // true , as switch condition is integer therefore case condition focus on integer.
			printf("five\n");
			break;
		case 2:                                  // false
			printf("two\n");
			break;
		default:                                // deafult
			printf("else\n");
			break;
	
	}
 
 }
