

#include<stdio.h>

 void main() {
 
 int z=20, ans=0;

 ans=z++ + z++ + ++z + z++ + z++ + ++z + z++;
 printf("%d %d\n",z,ans);
 
 }
