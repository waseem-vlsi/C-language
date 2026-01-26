#include <stdio.h>
#include <math.h>
int main()
{
    int tel, hin, eng, mat, sci, soc;
    int pass = 0, fail = 0;
    int grace;

    printf("Enter Telugu marks: ");
    scanf("%d", &tel);
    printf("Enter Hindi marks: ");
    scanf("%d", &hin);
    printf("Enter English marks: ");
    scanf("%d", &eng);
    printf("Enter Maths marks: ");
    scanf("%d", &mat);
    printf("Enter Science marks: ");
    scanf("%d", &sci);
    printf("Enter Social marks: ");
    scanf("%d", &soc);

    switch(tel >= 35)
    {
        case 1: pass++;
        break;
        case 0: fail++; 
        break;
    }

    switch(hin >= 35)
    {
        case 1: pass++; 
        break;
        case 0: fail++; 
        break;
    }

    switch(eng >= 35)
    {
        case 1: pass++;
        break;
        case 0: fail++;
        break;
    }

    switch(mat >= 35)
    {
        case 1: pass++;
        break;
        case 0: fail++; 
        break;
    }

    switch(sci >= 35)
    {
        case 1: pass++;
        break;
        case 0: fail++; 
        break;
    }

    switch(soc >= 35)
    {
        case 1: pass++; 
        break;
        case 0: fail++; 
        break;
    }

   
    printf("Number of subjects failed = %d\n", fail);
     printf("Number of subjects passed = %d\n", pass);
    grace = pass * 5;
    printf("Total grace marks:%d ",grace);

    return 0;
}
