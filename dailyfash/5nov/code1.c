
#include<stdio.h>

 struct movie {

 	char movie_name[20];
	float rating;
	char lead_actor[20];
 };

 void main() {
 
	 struct movie obj1 = {"sanju",4.5,"Sanjay dutt"};
	 struct movie obj2 = {"lagan",5.0,"Amir Khan"};
	 struct movie obj3 = {"mirzapur",4.7,"Kalin bhaiya"};

	 struct movie arr[3] = {obj1,obj2,obj3};

	 for(int i = 0; i < 3; i++) {

	 	 int x = 1;	 
		 x = x + i;
		 printf("Movie %d : \n",x);
		 printf("Movie name : %s\n",arr[i].movie_name);
	 	 printf("Rating : %f\n",arr[i].rating);
		 printf("Main Actor : %s\n",arr[i].lead_actor);
	 }
 }

/*
 *
Movie 1 :
Movie name : sanju
Rating : 4.500000
Main Actor : Sanjay dutt
Movie 2 :
Movie name : lagan
Rating : 5.000000
Main Actor : Amir Khan
Movie 3 :
Movie name : mirzapur
Rating : 4.700000
Main Actor : Kalin bhaiya

*/
