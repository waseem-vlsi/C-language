#include <stdio.h>
void binary_conv(int num, int bit_size); 
int main()
{
    int num, bit_size;
    printf("Enter the bit size : ");
    scanf("%d", &bit_size);
    printf("Enter the number: ");
    scanf("%d", &num);
    binary_conv(num, bit_size);
  return 0;  
}

void binary_conv(int num, int bit_size)
{
    int temp[bit_size],i;
    printf("Reversed binary number!!!\n ");
    for(i = 0; i < bit_size; i++)
    {
    if(num >= 0)
    {
    temp[i] = num % 2;
    printf("%d\t", temp[i]);
    num = num/2;
    }
    else 
    return;
    }
    printf("\ncorrect binary number!!!\n ");
    for(i = bit_size - 1; i>= 0; i--)
    {
        
        printf("%d\t", temp[i]);
    }
}
