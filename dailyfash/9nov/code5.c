
#include<stdio.h>

 struct hospital {
 	
	 struct docter1 {
 
	 	char name[20];
	 	int noOfHosvisit;
	 	char degree[20];
	 	float experince;
	 }sandip;
	 
	 struct docter2 {
 
	 	char name[20];
	 	int noOfHosvisit;
	 	char degree[20];
	 	float experince;
	 }ashok;

 };

 void main() {
 
	 struct hospital obj = {{"Dr.Sandip chavan",3,"MBBS",5},{"Dr.Ashok rathi",4,"MD",3}};
	 printf("Docter 1 : \n");
	 printf("Docter name : %s\n",obj.sandip.name);
	 printf("Docter hospital visit : %d\n",obj.sandip.noOfHosvisit);
	 printf("Docter Degree : %s\n",obj.sandip.degree);
	 printf("Experince : %0.1f\n",obj.sandip.experince);

	 printf("\nDocter 2 : \n");
	 printf("Docter name : %s\n",obj.ashok.name);
	 printf("Docter hospital visit : %d\n",obj.ashok.noOfHosvisit);
	 printf("Docter Degree : %s\n",obj.ashok.degree);
	 printf("Experince : %0.1f\n",obj.ashok.experince);
 }

/*
 * Docter 1 :
Docter name : Dr.Sandip chavan
Docter hospital visit : 3
Docter Degree : MBBS
Experince : 5.0

Docter 2 :
Docter name : Dr.Ashok rathi
Docter hospital visit : 4
Docter Degree : MD
Experince : 3.0

*/
