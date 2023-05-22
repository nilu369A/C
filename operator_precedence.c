#include <stdio.h>

int main()
{
        int x = 2;
        int y = 5;
        printf("The value of 3*x - 8y %d \n", 3 * x - 8 * y);
        printf("The value of  8*y / 3*x %d \n", 8 * y / 2 * x);
        // 8*5/2*2 = 40/4 will give wrong answer
        // 40/2*2
        // 20*2
        // 40
        return 0;
}