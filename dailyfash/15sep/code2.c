
#include<stdio.h>

 void main() {
 
	 char upper[27];
	 char ch1 = 65;
	 char ch2 = 33;


	 printf("Upper case element in array is : ");
	 for(int i = 0; i < 26 ; i++) {
	
		 upper[i] = ch1;
		 printf("%c ",upper[i]);
		 ch1++;
	 }
	 printf("\nLower acse element in array : ");
	 for(int i = 0; i < 26; i++) {
	 
		 printf("%c ",upper[i] + 32);
	 
	 }
	 printf("\n");
 
 }

/**
 *
 * Upper case element in array is : A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
   Lower acse element in array : a b c d e f g h i j k l m n o p q r s t u v w x y z
 */
