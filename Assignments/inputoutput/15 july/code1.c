

#include<stdio.h>

 void main() {
 
 	double firstval,secondval,add,sub,mult,div;
	
	printf("First precision value:");
	scanf("%lf",&firstval);
	printf("Second precision value:");
	scanf("%lf",&secondval);

	if(firstval>secondval) {
	
		printf("Enter the number up to second prcision are %.2lf & %.2lf\n",firstval,secondval);

		add=firstval+secondval;
		printf("their addition:%.2lf\n",add);

		sub=firstval-secondval;
		printf("their subtraction:%.2lf\n",sub);

		mult=firstval*secondval;
		printf("their multiplication:%.2lf\n",mult);

		div=firstval/secondval;
		printf("their division:%.2lf\n",div);
	
	}
	else {
	
		printf("Enter the number up to second prcision are %.2lf & %.2lf\n",secondval,firstval);

		add=secondval+firstval;
		printf("their addition:%.2lf\n",add);

		sub=secondval-firstval;
		printf("their subtraction:%.2lf\n",sub);

		mult=secondval*firstval;
		printf("their multiplication:%.2lf\n",mult);

		div=secondval/firstval;
		printf("their division:%.2lf\n",div);
	
	}



 
 }


//First precision value:12.745
//Second precision value:10.2229
//Enter the number up to second prcision are 12.74 & 10.22
//their addition:22.97
//their subtraction:2.52
//their multiplication:130.29
//their division:1.25


