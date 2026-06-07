#include <stdio.h>
#include <math.h>
void math_operations(int *, int *, int *, int *, int *,float *, float *, float *);
int main()
{
    int n1,n2,n3,n4,n5;
    float avg,sum,sd;
    printf("Enter 5 numbers for which we need to find sum,avg,standard deviation!!!\n");
    printf("n1 = ");
    scanf("%0d", &n1);
    printf("n2 = ");
    scanf("%0d", &n2);
    printf("n3 = ");
    scanf("%0d", &n3);
    printf("n4 = ");
    scanf("%0d", &n4);
    printf("n5 = ");
    scanf("%0d", &n5);
    
    math_operations(&n1, &n2, &n3, &n4, &n5, &avg, &sum, &sd);
    
    printf("Sum = %0f\t, avg = %0f\t and sd = %0f", sum,avg,sd);
    return 0;
    
}

void math_operations(int *n1, int*n2, int *n3, int*n4, int *n5, float *avg, float *sum, float *sd)
{
    *avg = (*n1 + *n2 + *n3 + *n4 + *n5) / 5.0;
    *sum = (*n1 + *n2 + *n3 + *n4 + *n5);
*sd = sqrt(
       ((pow(*n1 - *avg,2.0) +
         pow(*n2 - *avg,2.0) +
         pow(*n3 - *avg,2.0) +
         pow(*n4 - *avg,2.0) +
         pow(*n5 - *avg,2.0))/4));
}
