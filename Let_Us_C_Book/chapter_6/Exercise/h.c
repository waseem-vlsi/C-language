#include <stdio.h>
int main()
{
    int hour,Time;
    for(hour = 0; hour<=24; hour++)
    {
        if(hour<12 || hour == 24)
        {
            printf("Time : %d : 00 :00 AM\n", hour);

         if(hour == 24)
        {
          
            printf("Now we have Mid night\n");
        }
        }
        else if(12 <= hour < 24)
        {
        printf("Time : %d : 00 :00 PM\n", hour); 
          if(hour == 12)
        {
           
            printf("Now we have noon\n");
        }
        }
       

    }
    return 0;
}
