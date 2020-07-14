

#include<stdio.h>

 void main() {
 
 int a=10, ans=0;

 ans=++a + a++ + ++a + a++;
 printf("%d %d\n",a,ans);
 
 }
