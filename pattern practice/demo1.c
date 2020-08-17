
#include<stdio.h>

void main(){
	int i=1,j=1,k=5;
	int ch = 65;
	for(i=1;i<6;){
		if(k>i){
			printf("  ");
			k--;
		}
		else if(j++<=i+k-1){
			printf("%c ",ch);
		}
		else{
			j=1;
			k=5;
			i++;
			ch++;
			printf("\n");
		}
	}
}
