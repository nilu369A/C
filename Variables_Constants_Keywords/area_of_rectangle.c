#include <stdio.h>

int main()
{
        // Declare variables to store height and width
        int height, width;
        
         // Prompt the user to enter the height of the rectangle
        printf("Enter the height of the rectangle \n");
        
         // Read the height input from the user and store it in the height variable
        scanf("%d", &height);
        
         // Prompt the user to enter the width of the rectangle
        printf("Enter the width \n");
        
         // Read the width input from the user and store it in the width variable
        scanf("%d", &width);
        
        // Calculate the area of the rectangle by multiplying height and width
        int area = height * width;
        
        // Display the calculated area to the user
        printf("The area of the rectangle is %d", area);
        
        return 0;
}