#include <stdio.h>
int main()
{
    int N,item,i,total  = 0, net_amount;
    printf("enter number of items: ");
    scanf("%d", &N);
    for(i = 1; i < N+1 ; i++)
    {
        printf("enter the price of item%d = ", i);
        scanf("%d", &item);
      total = total + item; 
    }
    printf("total : %d\n", total);
    if (total > 1000)
    {
    net_amount = total - (total*0.1);
    printf("amount to be paid after discount: %d", net_amount);
    }
    else 
    printf("no discount is provided bcz amount is less than 10000: %d", total);
    return 0;
}
