#include <stdio.h>
#include <math.h>
int main()
{
    float L1,L2,G1,G2,D;
    printf("Enter the values of latitude: ");
    scanf("%f %f", &L1,&L2);
    printf("Enter the values of longitude: ");
    scanf("%f %f", &G1,&G2);
    D = 3963*acos((sin(L1)*sin(L2) + cos(L1)*cos(L2))*cos(G2-G1));
    printf("the distance between them in nautical miles: %f", D);
    return 0;
    
}
