
#include<stdio.h>

 void main() {
 
	 int real1,img1,real2,img2;
	 printf("Enter the number1 :\n");
	 printf("Enter real part : ");
	 scanf("%d",&real1);
	 printf("Enter the imaginary part : ");
	 scanf("%d",&img1);
	 printf("Enetr the number2 :\n");
	 printf("Enter real part : ");
	 scanf("%d",&real2);
	 printf("Enter the imaginary part : ");
	 scanf("%d",&img2);

	 printf("The addition of %d+%di & %d+%di is %d+%di\n",real1,img1,real2,img2,real1+real2,img1+img2);
 }

/*
Enter the number1 :
Enter real part : 5
Enter the imaginary part : 3
Enetr the number2 :
Enter real part : 2
Enter the imaginary part : 1
The addition of 5+3i & 2+1i is 7+4i

*/
