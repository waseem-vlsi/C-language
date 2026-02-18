#include <stdio.h>
void areaperi(int radius, float *peri, float *area);
int main()
{
    int radius;
    float peri, area;
    printf("we are finding area and perimeter of a circle!!!\n");
    printf("Enter the radius of a circle in cms: ");
    scanf("%d", &radius);
    areaperi (radius, &peri, &area);
    printf("Perimeter of a circle: %f\n", peri);
    printf("Area of a circle: %f", area);
    return 0;
}

void areaperi(int radius, float *peri, float *area)
{
    *peri = 2*3.14*radius;
    *area = 3.14*radius*radius;
    
}
