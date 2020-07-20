
#include<stdio.h>

 void main() {
 
 	int i=1;

	while(i<=10) {
	
		if(i%2==0)
			continue;
		else
			printf("%d\n",i);
	        i++;
	}
 }
