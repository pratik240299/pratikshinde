
#include<stdio.h>

 int area,side,l,b,r,base,h;
 
 void square(int x) {
 
	 area = x * x;
	 printf("Area of square = %d\n",area);
 }
 void rectangle(int x,int y) {
 
	 area = x * y;
	 printf("Area of rectangle = %d\n",area);
 }
 void circle(int x;) {
 
	 area = 3.14 * r * r;
	 printf("Area of circle = %d\n",area);

 }
 void triangle(int x,int y) {
 
	 area = (x * y) / 2;
	 printf("Area of traingle = %d\n",area); 
 }



 void main() {
 
	int choice; 
	printf("Which type of shape area u want to find : \n");
	printf(" 1.Square\n");
	printf(" 2.Rectangle\n");
	printf(" 3.Circle\n");
	printf(" 4.Triangle\n");
	printf("Enter the choice : ");
	scanf("%d",&choice);


	switch(choice) {
	
		case 1 : 
			printf("Enter the side of square : ");
			scanf("%d",&side);

			void (*fptr1)(int) = square;
			fptr1(side);
			break;
			
		case 2 :
			printf("Ente the length and bredth of rectangle : ");
			scanf("%d %d",&l,&b);

			void (*fptr2)(int,int) = rectangle;
			fptr2(l,b);
			break;
		
		case 3 :
		        printf("Enter the radius of circle : ");
	       	        scanf("%d",&r);
			
			void (*fptr3)(int) = circle;
			fptr3(r);
			break;
		
		case 4 :
			printf("Enter the height and base of triangle : ");
			scanf("%d %d",&base,&h);

			void (*fptr4)(int,int) = triangle;
			fptr4(base,h);
	}


 }

/*
 
Which type of shape area u want to find :
 1.Square
 2.Rectangle
 3.Circle
 4.Triangle
Enter the choice : 2
Ente the length and bredth of rectangle : 12 10
Area of rectangle = 120

 */
