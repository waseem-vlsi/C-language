#include <stdio.h>

void natural_num_sum(int count,int sum);

int  main()
{ 
    
    int num,count,sum;
    sum = 0;
    printf("Enter the number of natural numbers u need to sum: ");
    scanf("%d", &count );
    natural_num_sum(count,sum);
    return 0;
}

void natural_num_sum(int count,int sum)
{ 

    if(count == 0)
    {
      printf("%d\n", sum);  
    return;
    }
    else 
    {
        sum = sum + count;
        natural_num_sum(count - 1,sum);
    }
      

}
