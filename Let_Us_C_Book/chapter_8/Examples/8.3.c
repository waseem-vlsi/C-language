#include <stdio.h>
int roman_func(int , int , int );
int main()
{
    int year;
    printf("Enter the year for which u want to find roman numbers: ");
    scanf("%d", &year);
   year =  roman_func(year,1000,'m');
   year =  roman_func(year,500,'d');
    year = roman_func(year,100,'c');
    year = roman_func(year,50,'I');
    year = roman_func(year,10,'x');
    year = roman_func(year,5,'v');
    year = roman_func(year,1,'i');
    return 0;
    
}

int roman_func(int year, int eq_val, int roman_val)
{
    int i,j;
        j = year / eq_val;
    for(i = 1; i<=j;i++)
    {
        printf("%c", roman_val);
    }
    return (year % eq_val);
}
