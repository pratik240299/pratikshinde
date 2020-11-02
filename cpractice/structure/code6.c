
#include<stdio.h>
#pragma pack(1)

struct player {

	int jerno;
	float avg;
	char grade;
}rohit = {34,67.8,'A'},rayadu = {67,98.9,'B'};

void main() {

	struct player virat = {18,50.53,'A'};
	printf("%ld\n",sizeof(virat));
	printf("%ld\n",sizeof(rohit));
	printf("%ld\n",sizeof(rayadu));

	printf("%d\n",virat.jerno);
	printf("%f\n",virat.avg);
	printf("%c\n",virat.grade);
	
	printf("%d\n",rohit.jerno);
	printf("%f\n",rohit.avg);
	printf("%c\n",rohit.grade);
	
	printf("%d\n",rayadu.jerno);
	printf("%f\n",rayadu.avg);
	printf("%c\n",rayadu.grade);



}
