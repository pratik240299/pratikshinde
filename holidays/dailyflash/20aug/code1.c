
#include<stdio.h>

 void main() {
 
	 int a , b, c;
	 printf("Enter the value of a , b & c : ");
	 scanf("%d %d %d",&a,&b,&c);

	 if(((a*a) + (b*b)) == (c*c))
		 printf("triangle satisfied the pythagorean theorem\n");
	 else
		 printf("triangle doesn't satisfied the pythagorean theorem\n");
 }

/*
 *
 * Enter the value of a , b & c : 3 4 5
   triangle satisfied the pythagorean theorem
 */
