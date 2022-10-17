/* Program using indirection to print result of multiplication */
#include <stdio.h>

int main()
{
    int x, y, *ptr_x, *ptr_y;
    x = 5;
    y = 6;
    ptr_x = &x;
    ptr_y = &y;

    *ptr_x *= *ptr_y;
    printf("The result is %d\n", *ptr_x);
    return 0;
}