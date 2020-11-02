
#include<stdio.h>
#pragma pack(1)
struct player {

	//char playername[10];
	int jerno;
	float avg;
	char grade;		
};

void main() {


	struct player virat = {10,50.7,'A'};
	struct player dhoni = {7,45.6,'A'};
	printf("%ld\n",sizeof(struct player)); 		// 9
	printf("VIRAT : \n");
	printf("%d\n",virat.jerno);
	printf("%f\n",virat.avg);
	printf("%c\n",virat.grade);
	printf("DHONI : \n");
	printf("%d\n",dhoni.jerno);
	printf("%f\n",dhoni.avg);
	printf("%c\n",dhoni.grade);
}

/*
 * 9
VIRAT :
10
50.700001
A
DHONI :
7
45.599998
A

*/
