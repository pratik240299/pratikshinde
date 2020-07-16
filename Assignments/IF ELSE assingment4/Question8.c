
#include<stdio.h>

 void main() {
 
 int year=2020;

 if(year%4==0 && year%100 !=0 || year%400==0)  {            //(true && true || false) is true
	 printf("%d year is leap year\n",year);             // before here was error ,year was not written
 }
 
 }
