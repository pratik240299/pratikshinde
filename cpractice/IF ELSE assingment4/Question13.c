
#include<stdio.h>

 void main()  {
 
	 float n1=2.5,n2=3.5,n3=4.5;

 if(n1>=n2 && n1>=n3) {                          // false
 	printf("largest number:%f",n1);
 }
 if(n2>=n1 && n2>=n3){                           // false
 	printf("largest number:%f",n2);
 }
 if(n3>=n1 && n3>=n2) {                           // (true && true)=true ..therefore condition is true
 	printf("largest number:%f\n",n3);
 }
 }
