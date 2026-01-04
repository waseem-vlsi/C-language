#include <stdio.h>
#include <math.h>
int main()
{
    int i,population = 10000,initial_population;
    printf("Enter the population of a city: ");
    scanf("%d", &initial_population);
    for(i = 1; i<= 10; i++)
    {
        population = 0.1*population + population;
        printf("Enter the population of %d year: %d\n", i,population  );
    }
  return 0;  
}
