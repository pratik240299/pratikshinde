
#include<stdio.h>

 struct company {
 
	 char name[20];
	 int noemp;
 };
 void main() {
 
	struct company cp1 = {"Binecaps",34};
	struct company cp2 = cp1;
	cp2.noemp = 40;
	struct company cp3 = cp2;

	printf("%s\n",cp1.name);
	printf("%s\n",cp2.name);
	printf("%s\n",cp3.name);
        	
 }
