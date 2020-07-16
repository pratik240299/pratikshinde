
#include<stdio.h>

   void main() {
   
   int a=10,b=20;

   if((a && b++) && (a++ || ++b))   {     // true
        	printf("a:%d\n",a);
		printf("b:%d\n",b);
  
       }
    	printf("out of if\n");
   
   }

// explaination : (a && b++)  is true
//                (a++ || ++b ) is true
//                therefore (true) && (true) is true
