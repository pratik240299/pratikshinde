


#include<stdio.h>

void main() {

  int a=2, b=3,c=15,d=20,ans=0;
  int e=5, f=10, anss=0;

  ans=++a + b++ +2 + c++ + ++d + e-- + --f;
  anss=++e + ++f

  printf("%d %d %d %d %d %d %d\n",a,b,ans,c,d,e,f);
  printf("%d\n",anss);


}


