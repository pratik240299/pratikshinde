
#include<stdio.h>
  void main() {
  
  	int x=2;

	switch(x <<(x+1)) {
	
		default:                                //true
			printf("default\n");
			break;
		case 1:                                  //false
			printf("1\n");
			break;
		case 2:                                  //false
			printf("2\n");
			break;
		case 3:                                 //false
			printf("3\n");
			break;
		case 4:                                  //false
			printf("4\n");
			break;
		case 8:                                   //false
			printf("8\n");
			break;

	
	}
  }
