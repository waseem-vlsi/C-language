#include <stdio.h>
#include <math.h>
int main()
{
    int num,num_range,i;
    int pos_count = 0, neg_count = 0, zero_count = 0;
    printf("Enter the range upto which need to cateogerize numbers: ");
    scanf("%d", &num_range);
    printf("Enter the number\n ");
    for(i = 1; i <= num_range; i++)
    {
      printf("num%d -  ", i);
      scanf("%d", &num);
      if(num > 0)
      {
          pos_count = pos_count + 1;
      }
      else if(num<0)
      {
          neg_count = neg_count + 1;
          
      }
      else if(num == 0)
      {
          zero_count = zero_count + 1;
      }
    }
    printf("positive numbers count: %d\n", pos_count);
    printf("Negative numbers count: %d\n", neg_count);
    printf("zero's count: %d\n", zero_count);
    return 0;
}
