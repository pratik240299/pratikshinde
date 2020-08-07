
#include<stdio.h>

 void main() {
 
	 
	 char ch ;
	 int num ;
	 int rem = 0,rev = 0;
	 int var; 
	 do{

	 	printf("Enter the number: ");
	 	scanf("%d",&num);

		 var = num;
		 rev = 0;

		for(num; num != 0;) {

			rem = num % 10;
			rev = rev*10 + rem;
			num = num / 10;

		}

		printf("%d\n",var);
		
		//	if(var == rev)
		//		break;	

		//	else{
		//	 	printf("do u want to enter anothe number: ");
	 	//		scanf(" %c",&ch);
		//	}

	 }while(var != rev);



 }
