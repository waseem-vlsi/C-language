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



// mathod 2

#include <stdio.h>

int getSum(int arr[], int n );

int main()
{
    int sum;
    int arr[500];
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i<n ; i++)
    {
        arr[i] = i;
        printf("arr: %0d\t", arr[i]);
    }
    sum = getSum(arr,n);
    printf("Sum : %0d", sum);
    return 0;
    }
    
    int getSum(int arr[], int n)
    {
        int sum = 0;
        for(int j = 0; j<n; j++)
        {
        sum += arr[j];
        }
        return sum;
    }
