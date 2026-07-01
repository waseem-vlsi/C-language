#include <stdio.h>
int main()
{

int arr[5] = {1,5,8,9,2};
  int res = arr[0];
 int n = sizeof(arr) / sizeof(arr[0]);
  for(int i =  0; i<n ; i++)
    {
      if(res < arr[i])
        res = arr[i];
    }
  printf("max element value : %0d", res);
return 0;
}
