
#include<stdio.h>

 void main() {
 
	 int n,store = 0;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 char ch[n];
	 printf("Enter the element in array : ");

	 for(int i = 0; i < n; i++) {
	 
		 scanf("%c",&ch[i]);
	 }
	 for(int i = n-1; i >= 0; i--) {
	 
		 if(ch[i] == ' ')
			 store = i;
		 printf("%c",ch[i]);
	 }
	 printf("Space at %dth index\n",store);

 }

/*
Enter the size of array : 14
Enter the element in array : pratik shinde
ednihs kitarp
Space at 7th index

*/
