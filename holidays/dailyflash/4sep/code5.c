
#include<stdio.h>

 void main() {
 
	 int date,month,year;
	 char char1,char2;
	 printf("Enter the date : ");
	 scanf("%d%c%d%c%d",&date,&char1,&month,&char2,&year);

	 switch(month) {
	 
		 case 1:
			 if(date <= 31)
				 printf("Date exist\n");
			 else
				 printf("Date doesn't exist\n");
			 break;
		 case 2:
			 if(date <= 29)
				 printf("Date exist\n");
			 else
				 printf("Date doesn't exist\n");
			 break;
		 case 3:
			 if(date <= 31)
				 printf("Date exist\n");
			 else
				 printf("Date doesn't exist\n");
			 break;
		 case 4:
			 if(date <= 30)
				 printf("Date exist\n");
			 else
				 printf("Date doesn't exist\n");
			 break;
		 case 5:
			 if(date <= 31)
				 printf("Date exist\n");
			 else
				 printf("Date doesn't exist\n");
			 break;
		 case 6:
			 if(date <= 30)
				 printf("Date exist\n");
			 else
				 printf("Date doesn't exist\n");
			 break;
		 case 7:
			 if(date <= 31)
				 printf("Date exist\n");
			 else
				 printf("Date doesn't exist\n");
			 break;
		 case 8:
			 if(date <= 31)
				 printf("Date exist\n");
			 else
				 printf("Date doesn't exist\n");
			 break;
		 case 9:
			 if(date <= 30)
				 printf("Date exist\n");
			 else
				 printf("Date doesn't exist\n");
			 break;
		 case 10:
			 if(date <= 31)
				 printf("Date exist\n");
			 else
				 printf("Date doesn't exist\n");
			 break;
		 case 11:
			 if(date <= 30)
				 printf("Date exist\n");
			 else
				 printf("Date doesn't exist\n");
			 break;
		 case 12:
			 if(date <= 31)
				 printf("Date exist\n");
			 else
				 printf("Date doesn't exist\n");
			 break;
			 
	 }
 }

/*
 *
 * Enter the date : 30/2/2018
   Date doesn't exist
 */
