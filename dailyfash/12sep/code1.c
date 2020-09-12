
#include<stdio.h>

 void main() {
 
	 int n,count1 = 0,count2 = 0;
	 printf("Enter the size of array : ");
	 scanf("%d",&n);

	 printf("Enter the character in array : \n");
	 char ch [n];
	 
	 for(int i = 0; i < n; i++) {
	 
		 scanf(" %c",&ch[i]);
	 }
	 for(int i = 0; i < n; i++) {
	 
		 if(ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U' || ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
			 count1++;
		 else
			 count2++;
	 }
	 printf("Vowels : %d\n",count1);
	 printf("Consonants : %d\n",count2);
 }

/*
 * Enter the size of array : 4
Enter the character in array :
J
a
E
k
Vowels : 2
Consonants : 2

*/
