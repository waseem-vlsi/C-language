#include <stdio.h>
void prime_factors(int num, int i);

int main()
{
    int num,i;
    printf("Enter the positive number: ");
    scanf("%d", &num);
    prime_factors(num,2);
    return 0;
}

void prime_factors(int num, int i)
{
  if(i<=num)
  {
      if(num % i == 0)
      {
      printf("%d\t", i);
      num = num/i;
      }
 
      else 
      i++;
       prime_factors(num,i);
   }
  
}
