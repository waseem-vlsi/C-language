#include <stdio.h>

int main()
{
    int j;
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array before reversed order!!!\n");
    for(int i = 0; i<n ; i++)
    {
        arr[i] = i*5;
        printf("%0d\t", arr[i]);
    }
    printf("\nArray after reverse order !!!\n");
    for(int j = n; j<=n; j--)
    {
        if(j>0)
        {
            printf("%0d\t", arr[j-1]);
        }
    }
    return 0;
}
