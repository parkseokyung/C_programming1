#include <stdio.h>

int main(void) 
{
  int num, i;
  int cur = 0;
  printf("Please enter a number: ");
  scanf("%d",&num);

  for(int i=1;i<=num;i++)
    {
      if(num % i == 0)
      {
        cur++;
      }
    }
  if (cur == 2)
    printf("It is a prime number. \n");
  else
    printf("It is not a prime number. \n");
  
  return 0;
}