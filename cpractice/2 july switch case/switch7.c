

#include<stdio.h>

 void main() {
             
	 char ch='<';

	 switch(ch) {
	 
                 case '<':
			{
				int a=5;
				int b=0;

				switch(a && b) {
				        
				 	case 0:
						printf("false\n");
					        break;
					case 1:
						printf("true\n");
					        break;	

				               }
				               break;
			}
			break;
		
		 case '>':
			{
      				int x=10;
				int y=0;

				switch(x || y) {
				           
				      	case 0:
						printf("true\n");
						break;
					case 1:
						printf("false\n");
						break;	
			                               
                                               }
					       break;
			}
                        break;

		 default:
				printf("not matching\n");	

			
	            }	
	      }
