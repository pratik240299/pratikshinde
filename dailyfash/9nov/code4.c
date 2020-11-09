
#include<stdio.h>

 struct marks {
 
	 float eng;
	 float hindi;
	 float sci;
 };

 void avg(struct marks m1,struct marks m2,struct marks m3) {
 
	 printf("Avg of english = %f\n",(m1.eng+m2.eng+m3.eng)/3);
	 printf("Avg of Hindi = %f\n",(m1.hindi+m2.hindi+m3.hindi)/3);
	 printf("Avg of Science = %f\n",(m1.sci+m2.sci+m3.sci)/3);

 }

 void main() {
 
	 struct marks obj1 = {34,78,98};
	 struct marks obj2 = {56,88,89};
	 struct marks obj3 = {45,32,78};

	 avg(obj1,obj2,obj3); 

 }

/*
Avg of english = 45.000000
Avg of Hindi = 66.000000
Avg of Science = 88.333336

*/
