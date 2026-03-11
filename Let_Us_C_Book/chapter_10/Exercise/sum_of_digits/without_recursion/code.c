#include <stdio.h>
int sum_of_digits(int num, int f, int ones_digit, int tens_digit, int hundreds_digit, int thousands_digit, int ten_thousand_digit  );
int main()
{
    int num, ones_digit, tens_digit,hundreds_digit,thousands_digit, ten_thousand_digit,f;
    printf("Enter the 5 digit number: ");
    scanf("%d", &num);
   f =   sum_of_digits( num, f,  ones_digit,  tens_digit, hundreds_digit, thousands_digit,  ten_thousand_digit  );
   printf("Sum of all digits = %d", f);
    return 0;
}

int sum_of_digits(int num, int f, int ones_digit, int tens_digit, int hundreds_digit, int thousands_digit, int ten_thousand_digit  )
{
    ones_digit = num % 10; 
    num = num / 10; 
    tens_digit = num % 10;
    num = num / 10;
    hundreds_digit = num % 10;
    num = num / 10;
    thousands_digit = num % 10;
    num = num / 10;
    ten_thousand_digit = num % 10;
    
    f =  ones_digit + tens_digit + hundreds_digit + thousands_digit + ten_thousand_digit;
    return (f);
}
