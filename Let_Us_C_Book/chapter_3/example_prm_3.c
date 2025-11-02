#include <stdio.h>

int main()
{
    int selling_price,cost_price, X,Y;
    printf("cost price of a product: ");
    scanf("%d", &cost_price);
    printf("Selling price of a product: ");
    scanf("%d", &selling_price);
    X = selling_price - cost_price;
    if(X > 0)
    {
        printf(" profit amount is %d", X);
    
    }
    else if(X<0)
    {
    Y =-1*X;
    printf("loss amount is %d", Y);
    }
    else 
    printf("no profit or no loss");
    return 0;
}
