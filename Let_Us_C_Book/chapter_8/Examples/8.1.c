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


// second approach

#include <stdio.h>

int main()
{
    int num;
    int result = 1;
    printf("Enter the number for which u want to find factorial : ");
    scanf("%d", &num);
    
    for(int i = 1; i<=num; i++)
    {
            result = result * i;
  
    }
     
        printf("The value of factorial of %d is given by: %d", num,result);
    return 0;
    
    
}
