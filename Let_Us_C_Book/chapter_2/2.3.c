#include <stdio.h>
int main()
{
    int nohun,nofifty,noten,nofive,notwo,noone,total,amount;
    printf("enter the amount(amount should be integer value): ");
    scanf("%d", &amount);
    nohun = amount / 100;
    amount = amount % 100;
    nofifty = amount / 50;
    amount = amount % 50;
        noten = amount / 10;
    amount = amount % 10;
        nofive = amount / 5;
    amount = amount % 5;
        notwo = amount / 2;
    amount = amount % 2;
        noone = amount / 1;
    amount = amount % 1;
    total = nohun + nofifty + noten + nofive + notwo + noone;
    printf("the total notes for an entered amount:%d\n ", total);
    return 0;
}
