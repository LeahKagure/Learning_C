/* program to print the results of expressions */
#include <stdio.h>

int main()
{
    int x;
    int y;
    
    x = 1;
    y = 3;
    x += y;
    printf("x += y is equal to:%d\n", x);

    x = 1;
    y = 3;
    x += -y;
    printf("x += -y is equal to:%d\n", x);

    x = 1;
    y = 3;
    x -= y;
    printf("x -= y is equal to:%d\n", x);

    x = 1;
    y = 3;
    x -= -y;
    printf("x -= -y is equal to:%d\n", x);

    x = 1;
    y = 3;
    x *= y;
    printf("x *= y is equal to:%d\n", x);

    x = 1;
    y = 3;
    x *= -y;
    printf("x *= -y is equal to:%d\n", x);
    return 0;
}