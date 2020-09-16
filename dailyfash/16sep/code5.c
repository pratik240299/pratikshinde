#include<stdio.h>

 void main() {

         int n,count2 = 0;
         printf("Enter the size of array : ");
         scanf("%d",&n);

         int num1[n],num2[n];
         printf("Enter th element in array : ");

         for(int i = 0; i < n; i++) {

                 scanf("%d",&num1[i]);
         }
         int z = 0;
         for(int i = 0; i < n; i++) {

                 int count1 = 0,rem,sum = 0;
                 for(int dig = num1[i]; dig != 0; dig = dig / 10) {

                         count1++;
                 }
                 for(int j = num1[i]; j != 0; j = j / 10) {

                         rem = j % 10;
                         int mult = 1;
                         for(int k = 1; k <= count1; k++) {

                                 mult = mult *rem;
                         }
                         sum = sum + mult;
                 }
                 if(sum == num1[i]) {
                         num2[z] = num1[i];
                         z++;
                 }
         }
         int new = 0;
         for(int i = 0; i < z-1; i++) {

                 for(int j = i + 1; j < z; j++) {

                         if(num2[i] > num2[j]) {

                                 new = num2[i];
                                 num2[i] = num2[j];
                                 num2[j] = new;
                         }
                 }
         }
         printf("Armstrong number : ");
         for(int i = 0; i < z; i++) {

                 printf("%d ",num2[i]);
         }
         printf("\n");

 }


/*
 *
Enter the size of array : 9
Enter th element in array : 9 12 153 1 2 370 5 67 3
Armstrong number : 1 2 3 5 9 153 370

*/
