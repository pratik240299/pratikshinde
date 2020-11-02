
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

	printf("%p\n",&virat);
	printf("%p\n",&virat.jerno);
	printf("%p\n",&virat.avg);
	printf("%p\n",&virat.grade);
	
	printf("%p\n",&rohit);
	printf("%p\n",&rohit.jerno);
	printf("%p\n",&rohit.avg);
	printf("%p\n",&rohit.grade);
	
	printf("%p\n",&rayadu);
	printf("%p\n",&rayadu.jerno);
	printf("%p\n",&rayadu.avg);
	printf("%p\n",&rayadu.grade);



}

/*
 *
 * 9
9
9
0x7ffdc7b17cff
0x7ffdc7b17cff
0x7ffdc7b17d03
0x7ffdc7b17d07
0x561292fa4010
0x561292fa4010
0x561292fa4014
0x561292fa4018
0x561292fa4020
0x561292fa4020
0x561292fa4024
0x561292fa4028

*/
