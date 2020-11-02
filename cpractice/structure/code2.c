
#include<stdio.h>
#pragma pack(1)
struct player {

	//char playername[10];
	int jerno;
	float avg;
	char grade;		
};

void main() {


	struct player obj1;
	printf("%ld\n",sizeof(struct player)); 		// 9
	printf("%ld\n",sizeof(obj1));			// 9
	//printf("%ld\n",sizeof(playername)); 		// 9
}
