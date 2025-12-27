#include <stdio.h>
int main()
{
     int i,j;
    float sum = 0.0, fact;
    for(i = 1; i <8; i++)
    {
        
            fact = 1.0;
        for(j = 1; j <= i; j++)
        {
           fact = fact * j;
         
        }
          printf("%f\n", fact); 
        sum = sum + (i/fact);
       
    }
    printf("sum of first 7 terms in series is given by !!!\n");
     printf("\t\t%f\n", sum);
    return 0;
}
