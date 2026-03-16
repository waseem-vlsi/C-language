#include <stdio.h>

void natural_num_sum(int num,int sum);

int  main()
{
    int num,count,sum;
    printf("Enter the number of natural numbers u need to sum: ");
    scanf("%d", &count );
    natural_num_sum( count,sum);
    return 0;
}

void natural_num_sum(int count,int sum)
{
    int i;
    sum = 0;
    for(i = 1; i<= count; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
}
