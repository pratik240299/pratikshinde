
#include<stdio.h>

 union batsmen {
 
	 char pname[10];
	 int jerno;
	 double avg;
 }msd;

 void main() {
 
	 printf("%ld\n",sizeof(msd));
	 printf("%ld\n",sizeof(union batsmen));
 }

// 16
// 16
