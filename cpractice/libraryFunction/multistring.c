
#include<stdio.h>

 void main() {
 
	 char* str1[4] = {"Pratik","Sahil","Airrish","Umang"};
	 char str2[4][10] = {"Java","Python","C","C++"};

	 for(int i = 0; i < 4; i++) {
		 
		 printf("%s\n",*(str1+i));
		 printf("%s\n",*(str2+i));

	 }
 }

/*
 * Pratik
Java
Sahil
Python
Airrish
C
Umang
C++

 */
