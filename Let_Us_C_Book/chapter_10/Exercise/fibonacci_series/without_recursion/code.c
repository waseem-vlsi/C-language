#include <stdio.h>
void fibonacci (int num);

int main()
{
    int num;
    
    printf("Enter the number for which u need to find fibonacci: ");
    scanf("%d", &num);
    fibonacci (num);
    return 0;
    
}

void fibonacci (int num)
{ 
    int i,a = 0, b = 1, next;
    for(i = 0; i<= num; i++)
    {
      printf("%d\t",a);
      next = a + b;
      a = b;
      b = next;
    }
}
