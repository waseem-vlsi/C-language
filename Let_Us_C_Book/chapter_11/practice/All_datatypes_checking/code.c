#include <stdio.h>
int main()
{
    int X = -27;
    unsigned int x = 27;
    short int a = -12;
    short unsigned int p = 123;
    long int z = 73989;
    long unsigned int r = 567890234;
    long long int q = -123455765;
    unsigned long long int e = 123456776543;
    
    char Y  = 'w';
    unsigned char y = 'w';
    
    float v = -1.2358795;

    double n = 78954111.258741;
 
    long double k = 5656.2596;
    
    printf("X = %d\n", X);
    printf("x = %u\n", x);
    printf("a = %hd\n", a);
    printf("p = %hu\n", p);
    printf("z = %ld\n", z);
    printf("r = %lu\n", r);
    printf("q = %lld\n", q);
    printf("e = %llu\n", e);
    printf("Y = %c\n", Y);
    printf("y = %c\n", y);
    printf("v = %f\n", v);
    printf("n = %lf\n", n);
    printf("k = %Lf\n", k);
    
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
}
