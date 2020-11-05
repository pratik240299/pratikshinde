
#include<stdio.h>

 union batsmen {

	 int jerno;
	 double avg;
	 char ch;
 }msd = {49.50,7,'A'};

 void main() {
 
	 printf("%ld\n",sizeof(msd));
	 printf("%ld\n",sizeof(union batsmen));
	 printf("%d\n",msd.jerno);
	 printf("%f\n",msd.avg);
	 printf("%c\n",msd.ch);

 }
	
/*	
8
8
7
0.000000


*/
