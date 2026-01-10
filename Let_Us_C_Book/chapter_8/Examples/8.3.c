#include <stdio.h>

int romanize(int y, int k, const char *sym);

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    year = romanize(year, 1000, "M");
    year = romanize(year, 900,  "CM");
    year = romanize(year, 500,  "D");
    year = romanize(year, 400,  "CD");
    year = romanize(year, 100,  "C");
    year = romanize(year, 90,   "XC");
    year = romanize(year, 50,   "L");
    year = romanize(year, 40,   "XL");
    year = romanize(year, 10,   "X");
    year = romanize(year, 9,    "IX");
    year = romanize(year, 5,    "V");
    year = romanize(year, 4,    "IV");
    year = romanize(year, 1,    "I");

    return 0;
}

int romanize(int y, int k, const char *sym)
{
    while (y >= k)
    {
        printf("%s", sym);
        y -= k;
    }
    return y;
}
