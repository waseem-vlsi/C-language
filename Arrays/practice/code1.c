#include <stdio.h>
int main()
{
int arr[] = {1,2,3,5,8,42};
  int n;
  n = sizeof(arr) / sizeof(arr[0]);

  for(int i = 0; i < n; i++) 
    {
       printf("The elements in array : %0d\n",arr[i]);
        
    }
  
  return 0;

}
