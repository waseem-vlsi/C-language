#include <stdio.h>

void binary_conv(int num, int j, int temp[]);

int main()
{
    int num, bit_size;

    printf("Enter the bit size : ");
    scanf("%d", &bit_size);

    printf("Enter the number: ");
    scanf("%d", &num);

    int temp[bit_size];
    printf("Reversed binary bits\n");
    binary_conv(num, bit_size, temp);

    printf("\nCorrected bits:\n");

    for(int i = 0; i < bit_size; i++)
        printf("%d\t ", temp[i]);

    return 0;
}

void binary_conv(int num, int j, int temp[])
{
    if(j == 0)
        return;
    else
    {
    temp[j-1] = num % 2;
    num = num/2;
    printf("%d\t", temp[j-1]);
    binary_conv(num, j - 1, temp);
    }
}
