
#include<stdio.h>

  void main(void) {
	  int aNum=0;
	  char aChar;
	  if(!aNum){                                          //true
	  	printf("inside first if...\n");            
		aNum+=20;                                    // aNum=21
		aChar ="T";                                  // if we print aChar it will print it ascit value
	  }
	  if(aNum %4!=0){                                    //false
	  	printf("inside second if..\n");
		aNum-=20;
		aChar="F";

	  }
	  if(aNum==0) {                                    //false
	  	printf("inside third if..\n");
		aChar="T";

	  }
	  printf("after all IF,values are...,%d & %c\n",aNum,aChar);
  
  
  
  }
