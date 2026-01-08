#include <stdio.h>
int fact(int);
int main()
{
    int factorial,num;
    printf("Enter the number for which you need to find factorial: ");
    scanf("%d", &num);
   factorial =  fact(num);
    printf("factorial = %d", factorial);
    return 0;
}
int fact(int num)
{

    int i; 
    int factorial = 1;
    for(i = 1; i<=num; i++)
    {
        factorial = factorial * i;
       
    }
    return (factorial); 
}
