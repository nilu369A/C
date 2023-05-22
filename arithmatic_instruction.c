#include <stdio.h>
#include <math.h> //for pow(), function of math

int main()
{
        int a = 8;
        int b = 2;

        printf("The value of a + b is %d \n", a + b);
        printf("The value of a - b is %d \n", a - b);
        printf("The value of a * b is %d \n", a * b);
        printf("The value of a / b is %d \n", a / b);

        int z;
        z = a * b; // legal
        // a * b = z; //illegal
        printf("The value of z is %d \n", z);

        printf("when 5 is devided by 2 remainder is %d \n", 5 % 2);
        printf("when -5 is devided by 2 remainder is %d \n", -5 % 2);
        printf("when 5 is devided by -2 remainder is %d \n", 5 % -2);

        // no operator is assumed to be present

        // printf("The value of 2 * 3 is %d \n", 2.3);

        // There is no operator to perform exponentiaton in c
        // printf("The vale of 4 ^ 5 is %d \n", 4 ^ 5); ---->will not work
        printf("The value of 4 to the power 5 is %f \n", pow(4, 5));

        // Type conversion

        printf("The value of 4 + 5 is %d \n", 4 + 5);
        printf("The value of 4 + 5.5 is %f \n", 4 + 5.5);
        printf("The value of 4.7 + 5.5 is %f \n", 4.7 + 5.5);
        printf("The value of 3.0 / 9 is %f \n", 3.0 / 9);

        return 0;
}