

#include<stdio.h>

   void main() {
   
   int x=2, ans=0;
   ans=x++ + ++x + x++ + ++x;

   printf("%d %d\n",x,ans);
   
   }
