#include <stdio.h>

struct NameCountryPopulation
{
   char Name[100];
   char country[100];
   int population;
};
int main()
{
   struct NameCountryPopulation arr[3];
   int i;
   printf("Input three cities:\n");
   for (i = 0; i < 3; i++) {
      printf("Name> ");
      scanf(" %[^\n]s", arr[i].Name);
      printf("Country> ");
      scanf(" %[^\n]s", arr[i].country);
      printf("Population> ");
      scanf("%d", &arr[i].population);
   }

   printf("Printing the three cities:\n");
   for (i = 0; i < 3; i++) {
      printf("%d. %s in %s with a population of %d people\n", i+1, arr[i].Name, arr[i].country, arr[i].population);
   }

   return 0;
}