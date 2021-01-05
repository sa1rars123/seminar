#include <stdio.h>

int main(void)
{
    int x = 16;
    int y = 74;
    int temp = 0; //temp variable for swapping

    printf("x is: %i\n", x);
    printf("y is: %i\n", y);

    //swapping
    temp = x;
    x = y;
    y = temp;

    //variables have been swapped. Now let's print the swapped values
    printf("x is now: %i\n", x);
    printf("y is now: %i\n", y);
}
