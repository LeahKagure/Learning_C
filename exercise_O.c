/* Program displaying results of shift operators */
#include <stdio.h>

int main()
{
    int x, y;

    x = 123;
    y = 4;
    printf("The result of x << y is: %d\n", x << y);
    printf("The result of x >> y is: %d\n", x >> y);
    return 0;
}