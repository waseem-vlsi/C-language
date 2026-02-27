#include <stdio.h>
#include <math.h>
void funcpow(int , int ,float *,int *);
int main()
{
    int num1,num2,fact;
    float power;
    printf("Enter your num1:");
    scanf("%d", &num1);
    printf("Enter your num2: ");
    scanf("%d", &num2);
   funcpow(num1,num2,&power,&fact);
   printf("The power of one number raised to another number is %f\n ", power);
   printf("The factorial value of number is %d\n", fact);
   return 0;
    
}
void funcpow(int num1, int num2, float *power, int *fact)
{
    int res = 1;
    int i;
    *power = pow(num1,num2);
    for(i = 1; i<= num1; i++)
    {
        res = res*i;
    }
           *fact = res;
}
