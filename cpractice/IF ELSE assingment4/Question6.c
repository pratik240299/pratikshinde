

#include<stdio.h>

  void main() {
  
  int subVal=15;

  if(subVal++ && subVal--) {              // condition is true and subval=15
   	printf("SubVal: %d\n",subVal);
  }
  if(subVal-- || subVal) {                //condition is true and subval=14
  	printf("SubVal:%d\n",subVal);
  }
  if(subVal>subVal); {                    //condition is true and subval=14
	  printf("SubVal:%d\n",subVal);  
  }
  
  
  }
