#include <stdio.h>
int main()
{
   int arr1[6] = { 1,2,3,4,5,6 };
   int arr2[6] = { 7,8,9,10,11,12 };
   int temp[6];
   int i;

   int* ptr1 = arr1;
   int* ptr2 = arr2;

   for (i = 0; i < 6; i++) {
      temp[i] = *(ptr1 + i);
      *(ptr1 + i) = *(ptr2 + i);
      *(ptr2 + i) = temp[i];
   }
   printf("after swap\narr1: ");
   for (i = 1; i <= 6; i++) {
      printf("%d ", *(ptr1 - 1 + i));
   }
   printf("\narr2: ");
   for (i = 1; i <= 6; i++) {
      printf("%d ", *(ptr2 - 1 + i));
   }
   return 0;
}