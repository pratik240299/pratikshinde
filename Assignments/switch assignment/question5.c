
#include<stdio.h>
 
 void main() {
 
 	int a;

	switch(a=(sizeof(int)>-1)) {
			
		case 1:
			printf("true\n");
			break;
		case 0:
			printf("false\n");
			break;		
	}
 }


//  write answer should be true as sizeof int is 4 and it is greater than -1 so value of a is true
//  . .....but output of this code is came is false.....i don't understand how it come.
