
#include<stdio.h>
/*
struct player {

	char playername[10];
        int jerno;
	double avg;
	char grade;		
};
*/

void main() {

	struct player {

		//char playername[10];
		char team;
		int jerno;
		double pratik;
		float avg;
		char grade;	
        	//char team;

        };

	struct player obj1;
	printf("%ld\n",sizeof(struct player)); 		// 12
	printf("%ld\n",sizeof(obj1));			// 12
}
