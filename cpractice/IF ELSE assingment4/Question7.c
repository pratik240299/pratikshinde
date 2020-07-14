

#include<stdio.h>

  void main() {
  
  int weight=50;

  if(weight<50 && weight>30) {                        //false
    	printf("you are under weight\n");
  } 
  if(weight>50 && weight<=70) {                      //false
  	printf("you are well maintained\n");
  }
  if(weight>70); {                                                  // as there is semicolan (null statement) is bind with if condition,
                                                                    // thereforeit it print the next statement	  
  	printf("you are over weight and you have to work hard\n");
  }
  
  
  }
