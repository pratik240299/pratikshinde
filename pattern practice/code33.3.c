
#include<stdio.h>
 
  void main() {
  
	  for(int i =1; i <= 5; i++) {
	  
		  int count = 1;
		  char ch = 70-i;
		  
		  for(int j =1; j <= 5; j++) {
		  
			  if(i > count) {
			  
				  count++;
				  printf("  ");

			  }
			  else {
			  
				  printf("%c ",ch);
				  ch--;
			  }
		  }
		  printf("\n");
	  }
  }

/*
 *
E D C B A
  D C B A
    C B A
      B A
        A

*/	
