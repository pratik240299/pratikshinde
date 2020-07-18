
#include<stdio.h>

 void main() {

	char start='A';
 	char Lw;
	char Up;

	printf("Lower Bound of Range: ");
	scanf("%c",&Lw);
	printf("Upper Bound of Range: ");
	scanf(" %c",&Up);

	while(start<=Up) {
	
		while(Lw<=Up) {
		
			if(Lw=='A'|| Lw=='E'|| Lw=='I'|| Lw=='O'|| Lw=='U')
				printf("%c is Vowel\n",Lw);
			else
				printf("%c is Consonant\n",Lw);
			Lw++;
		}
	start++;

	}

 }

//Lower Bound of Range: C
//Upper Bound of Range: F
//C is Consonant
//D is Consonant
//E is Vowel
//F is Consonant

