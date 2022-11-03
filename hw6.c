#include <stdio.h>

int main()
{
   
   int i, j = 0, k = 0;
   int integer[5][3] = { 0 };

   for (i = 0; i < 5; i++) {
      printf("Please input five integers: ",integer[i][0]);
      scanf("%d", &integer[i][0]);
      if (integer[i][0] % 2 == 0) {
         integer[k][1] = integer[i][0];
         k = k + 1;
      }
      else {
         integer[j][2] = integer[i][0];
         j = j + 1;
      }
   }

   printf("Odd number: ");
   for (i = 0; i < j; i++) {
      printf("%d ", integer[i][2]);
   }
   printf("\n");
   printf("Even number: ");
   for (i = 0; i < k; i++) {
      printf("%d ", integer[i][1]);
   }

   return 0;
}