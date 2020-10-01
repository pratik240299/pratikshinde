#include<stdio.h>

 void main() {

         int n;
         printf("Enter the size of arra : ");
         scanf("%d",&n);

         int arr1[n];
         printf("Enter the element in 1st array : ");

         for(int i = 0; i < n; i++) {

                 scanf("%d",&arr1[i]);
         }
         int arr2[n];
         printf("Enter the element in 2st array : ");

         for(int i = 0; i < n; i++) {

                 scanf("%d",&arr2[i]);
         }
         int *iptr1 = arr1;
         int *iptr2 = arr2;

         /*
          * if the pointer is declared as constant , then we cannnot change the change the address of variable given to it, but we can change             the data of variable bt using pointer.
          *
          */

         printf("Array 1 : \n");
         for(int i = 0; i < n ; i++) {

                 iptr1 = arr1 + i;
                printf("arr1[%d] = %d and address is %p\n",i,*iptr1,iptr1);
         }
         printf("Array 2 : \n");
         for(int i = 0; i < n ; i++) {

                 iptr2 = arr2 + i;
                 printf("arr2[%d] = %d and address is %p\n",i,*iptr2,iptr2);
         }

 }

/*
 * Enter the size of arra : 5
Enter the element in 1st array : 1 2 3 4 5
Enter the element in 2st array : 9 8 7 6 5
Array 1 : 
arr1[0] = 1 and address is 0x7ffd8ea417b0
arr1[1] = 2 and address is 0x7ffd8ea417b4
arr1[2] = 3 and address is 0x7ffd8ea417b8
arr1[3] = 4 and address is 0x7ffd8ea417bc
arr1[4] = 5 and address is 0x7ffd8ea417c0
Array 2 : 
arr2[0] = 9 and address is 0x7ffd8ea41790
arr2[1] = 8 and address is 0x7ffd8ea41794
arr2[2] = 7 and address is 0x7ffd8ea41798
arr2[3] = 6 and address is 0x7ffd8ea4179c
arr2[4] = 5 and address is 0x7ffd8ea417a0


*/
