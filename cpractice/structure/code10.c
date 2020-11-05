
#include<stdio.h>

 struct bilearn {
 
	 char type[10];
	 int noEmp;
 };
 void main() {
 
	 struct bilearn obj = {"Prodect",34};
	 struct bilearn *ptr = &obj;
	 printf("Type = %s Emply = %d\n",obj.type,obj.noEmp);
	 printf("Type = %s Emply = %d\n",ptr->type,ptr->noEmp);
	 printf("Type = %s Emply = %d\n",(*ptr).type,(*ptr).noEmp);

 }
/*
 * Type = Prodect Emply = 34
Type = Prodect Emply = 34
Type = Prodect Emply = 34

*/
