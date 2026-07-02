#include <stdio.h>

int main()
{
    int arr[5] = {2,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    
    for(int i = 0; i<n ; i++) 
    {
        sum = sum + arr[i];
    }
    printf("sum : %0d", sum);
    return 0;
}
