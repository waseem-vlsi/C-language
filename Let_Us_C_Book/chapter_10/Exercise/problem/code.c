
#include <stdio.h>

int main()
{
    int i;
    int peg_A[3],peg_B[3],peg_C[3];
int A[3] = {1,2,3};
int B[3],C[3];
for(i = 0; i<3; i++)
{
    peg_A[i] = A[i];
    printf("peg_A[%d] = %d\t", i, A[i]);
}
printf("\n");

for(i = 2; i >=0; i--)
{
   peg_B[2 - i] = peg_A[i];
   printf("peg_B[%d] = %d\t", 2 - i, peg_B[2 - i]);
}
printf("\n");
for(i = 0; i<3; i++)
{
    peg_C[i] = peg_B[2 - i];
    printf("peg_C[%d] = %d\t", i,peg_C[i]);
}

return 0;
}

