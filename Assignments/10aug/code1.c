
#include<stdio.h>

 void main() {
 
//	 int num = 20;
	// char ch = 'A';
	 float x = 20.5;

	 if(sizeof(char) == 1)
		 printf("variable is of char datatype\n");
	 else if (sizeof(int) == 4) {
	 
		 printf("variable is of int datatype\n");
	 }
	 else if(sizeof(float) == 4) {
	 
		 printf("variable is of float datatype\n");
	 }

 }
