
#include<stdio.h>
#pragma pack(1)
 typedef struct pratik {
 
	 char name[10];
	 int pages;
	 float price;
 }book;

 void main() {
 
	 book cpp = {"PRATIK",670,1000};
	 printf("%ld\n",sizeof(book));		//18
	 book java = {"SAHIL",789,2000};
 
 }
