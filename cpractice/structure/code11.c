
#include<stdio.h>

 struct frds {
 
	 char name[20];
	 char type[20];
	 char status;
 };

 void main() {
 
	 struct frds obj1 = {"Rohit","Shanta",'Y'};
	 struct frds obj2 = {"Kanha","badmash",'Y'};
	 struct frds obj3 = {"Rahul","najuk",'Y'};

	 struct frds arr[3] = {obj1,obj2,obj3};

	 for(int i = 0; i < 3; i++) {
	 
		 printf("Friend name = %s\n",arr[i].name);
	 	 printf("Type = %s\n",arr[i].type);
	 	 printf("Status = %c\n",arr[i].status);
	 }

 }
/*
Friend name = Rohit
Type = Shanta
Status = Y
Friend name = Kanha
Type = badmash
Status = Y
Friend name = Rahul
Type = najuk
Status = Y
*/
