
#include<stdio.h>

union normal {

	int num;
	double avg;

};

 void main() {
 
	 union normal obj = {7,9.9};
//	 printf("%d %lf\n",obj.num,obj.avg);
 }
