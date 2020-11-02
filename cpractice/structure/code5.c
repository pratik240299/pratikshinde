
#include<stdio.h>
#pragma pack(1)
struct player {

	int jerno;
	float avg;
	char grade;		
};

void main() {


	printf("%ld\n",sizeof(struct player)); 		// 9
	struct player virat;
	virat.jerno = 20;
	virat.avg = 45.3;
	struct player dhoni;
	dhoni.jerno = 7;
	dhoni.avg = 89.6;
	printf("%d\n",virat.jerno);
}
