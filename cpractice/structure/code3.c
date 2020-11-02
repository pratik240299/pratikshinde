
#include<stdio.h>
#pragma pack(1)

struct player {

	double avg;
        int jerno;
	char grade;		
};

void main() {


	struct player obj1;
	printf("%ld\n",sizeof(struct player)); 		// 13
	printf("%ld\n",sizeof(obj1));			// 13
}
