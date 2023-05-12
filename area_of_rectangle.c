#include <stdio.h>

int main()
{
        int height, width;

        printf("Enter the height of the rectangle \n");
        scanf("%d", &height);

        printf("Enter the width \n");
        scanf("%d", &width);

        printf("The area of the rectangle is %d", height * width);
        return 0;
}