#include <stdio.h>

int main()
{
        // write a c program to calculate the simple interest
        int principal = 700, rate = 5, years = 2;
        int simple_interest = (principal * rate * years) / 100;
        printf("The value of the simple interest is %d", simple_interest);
        return 0;
}